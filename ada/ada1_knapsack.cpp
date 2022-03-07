#include <iostream>
#include <cmath>
using namespace std;

struct Knapsack {
    int count_no;
    float profit, weight, p_by_w;
};

void merge(Knapsack *k_s, int low, int mid, int high) {

    int i = low;
    int j = mid+1;
    int k = 0;
    Knapsack *temp = (Knapsack*) malloc (sizeof(Knapsack) * (high-low+1));

    while(i <= mid && j <= high) {
        if((k_s+i)->p_by_w >= (k_s+j)->p_by_w) {
            (temp+k)->count_no = (k_s+i)->count_no;
            (temp+k)->p_by_w = (k_s+i)->p_by_w;
            (temp+k)->profit = (k_s+i)->profit;
            (temp+k)->weight = (k_s+i)->weight;
            k++;
            i++;
        }
        else {
            (temp+k)->count_no = (k_s+j)->count_no;
            (temp+k)->p_by_w = (k_s+j)->p_by_w;
            (temp+k)->profit = (k_s+j)->profit;
            (temp+k)->weight = (k_s+j)->weight;
            k++;
            j++;
        }
    }
    while(i <= mid) {
        (temp+k)->count_no = (k_s+i)->count_no;
        (temp+k)->p_by_w = (k_s+i)->p_by_w;
        (temp+k)->profit = (k_s+i)->profit;
        (temp+k)->weight = (k_s+i)->weight;
        k++;
        i++;
    }
    while(j <= high) {
        (temp+k)->count_no = (k_s+j)->count_no;
        (temp+k)->p_by_w = (k_s+j)->p_by_w;
        (temp+k)->profit = (k_s+j)->profit;
        (temp+k)->weight = (k_s+j)->weight;
        k++;
        j++;
    }
    
    
    int l = 0;
    int m = low;
    while(m <= high) {
        (k_s+m)->count_no = (temp+l)->count_no;
        (k_s+m)->p_by_w = (temp+l)->p_by_w;
        (k_s+m)->profit = (temp+l)->profit;
        (k_s+m)->weight = (temp+l)->weight;
        l++;
        m++;
    }
    free(temp);
}

void mergeSort(Knapsack *k_s, int low, int high) {

    if(low < high) {
        int mid = (low+high)/2;
        mergeSort(k_s, low, mid);
        mergeSort(k_s, mid+1, high);
        merge(k_s, low, mid, high);
    }
}

int main() {
    int t_count = 0;
    float t_weight = 0;
    float t_profit = 0;
    cout << "Enter Totol Weight : ";
    cin >> t_weight;
    fflush(stdin);
    cout << "Enter Total Count : ";
    cin >> t_count;

    Knapsack *k_s = (Knapsack*) malloc (sizeof(Knapsack) * t_count);

    for(int i = 0; i < t_count; i++) {
        (k_s+i)->count_no = i+1;
        cout << "Enter " << i+1 << " object value : ";
        cin >> (k_s+i)->profit;
        cout << "Enter " << i+1 << " object weight : ";
        cin >> (k_s+i)->weight;
        (k_s+i)->p_by_w = floor(((float)(k_s+i)->profit / (k_s+i)->weight)*100)/100;
    }

    mergeSort(k_s, 0, t_count-1);

    for(int i = 0; i < t_count && t_weight != 0; i++) {
        if((k_s+i)->weight <= t_weight) {
            t_profit = t_profit + (k_s+i)->profit;
            t_weight = t_weight - (k_s+i)->weight;
        }
        else {
            t_profit = t_profit + (t_weight * (k_s+i)->p_by_w);
            t_weight = 0;
        }
    }

    cout << "\n\nTotal Profit : " << t_profit << "\nWeight Remaining : " << t_weight;
    
    return 0;
}