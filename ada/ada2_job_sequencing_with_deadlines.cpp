#include <iostream>
using namespace std;

class Jobs {
    public:
        int job_no;
        float profit;
        int deadline;
};

void merge(Jobs *job_arr, int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int k = 0;

    Jobs *temp = new Jobs[high-low+1];

    while(i <= mid && j <= high) {
        if((job_arr+i)->profit >= (job_arr+j)->profit) {
            (temp+k)->job_no = (job_arr+i)->job_no;
            (temp+k)->profit = (job_arr+i)->profit;
            (temp+k)->deadline = (job_arr+i)->deadline;
            k++;
            i++;
        }
        else {
            (temp+k)->job_no = (job_arr+j)->job_no;
            (temp+k)->profit = (job_arr+j)->profit;
            (temp+k)->deadline = (job_arr+j)->deadline;
            k++;
            j++;
        }
    }
    while(i <= mid) {
        (temp+k)->job_no = (job_arr+i)->job_no;
        (temp+k)->profit = (job_arr+i)->profit;
        (temp+k)->deadline = (job_arr+i)->deadline;
        k++;
        i++;
    }
    while(j <= high) {
        (temp+k)->job_no = (job_arr+j)->job_no;
        (temp+k)->profit = (job_arr+j)->profit;
        (temp+k)->deadline = (job_arr+j)->deadline;
        k++;
        j++;
    }
    for(int l = 0, m = low; m <= high; l++, m++) {
        (job_arr+m)->job_no = (temp+l)->job_no;
        (job_arr+m)->profit = (temp+l)->profit;
        (job_arr+m)->deadline = (temp+l)->deadline;
    }
    delete(temp);
}

void sortByProfit(Jobs *job, int low, int high) {

    if(low < high) {
        int mid = (low+high)/2;
        sortByProfit(job, low, mid);
        sortByProfit(job, mid+1, high);
        merge(job, low, mid, high);
    }
}

int max(Jobs *job_arr, int low, int high) {
    int max_value = (job_arr+low)->deadline;
    while(low <= high) {
        if((job_arr+low)->deadline > max_value) {
            max_value = (job_arr+low)->deadline;
        }
        low++;
    }
    return max_value;
}

int main() {
    int t_job = 0;
    float t_profit = 0;
    cout << "Enter Total Jobs : ";
    cin >> t_job;

    Jobs *job_arr = new Jobs[t_job];

    for(int i = 0; i < t_job; i++) {
        (job_arr+i)->job_no = i+1;
        cout << "Enter " << i+1 << " Jobs Profit : ";
        cin >> (job_arr+i)->profit;
        cout << "Enter " << i+1 << " Jobs Deadline : ";
        cin >> (job_arr+i)->deadline;
    }

    sortByProfit(job_arr, 0, t_job-1);

    int max_deadline = max(job_arr, 0, t_job-1);

    int *Temp_arr = new int[max_deadline]{0};

    for(int i = 0; i < t_job; i++) {
        if(Temp_arr[(job_arr+i)->deadline -1] == 0) {

            Temp_arr[(job_arr+i)->deadline -1] = (job_arr+i)->job_no;
            t_profit = t_profit + (job_arr+i)->profit;
        }
        else {

            for(int j = (job_arr+i)->deadline -1; j >= 0; j--) {
                if(Temp_arr[j] == 0) {
                    Temp_arr[j] = (job_arr+i)->job_no;
                    t_profit = t_profit + (job_arr+i)->profit;
                    break;
                }
                else if(j == 0){
                    cout << "\n" << (job_arr+i)->job_no << " Not Execute ";
                }
            }
        }
    }

    cout << "\nExecuted Jobs : ";
    for(int i = 0; i < max_deadline; i++) {
        cout <<Temp_arr[i] << ", ";
    }
    return 0;
}