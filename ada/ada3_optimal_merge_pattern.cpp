#include <iostream>
//#include <vector>

using namespace std;

class OMP {
    public:
        int list_no;
        int size;

        OMP() {
            // cout << "Constuctor Call \n";
            list_no = 0;
            size = 0;
        }
};

int partition(OMP *omp, int low, int high) {
    int pivot = low;
    int i = low +1;
    int j = high;
    while(i <= j) {
        while((omp+i)->size <= (omp+pivot)->size && i <= high) {
            i++;
        }
        while((omp+j)->size > (omp+pivot)->size && j >= low) {
            j--;
        }
        if(i < j) {
            int temp = (omp+i)->size;
            int temp_no = (omp+i)->list_no;
            (omp+i)->size = (omp+j)->size;
            (omp+i)->list_no = (omp+j)->list_no;
            (omp+j)->size = temp;
            (omp+j)->list_no = temp_no;
        }
    }
    if((omp+j)->size == (omp+pivot)->size) {

    }
    else {
        int temp = (omp+pivot)->size;
        int temp_no = (omp+pivot)->list_no;
        (omp+pivot)->size = (omp+j)->size;
        (omp+pivot)->list_no = (omp+j)->list_no;
        (omp+j)->size = temp;
        (omp+j)->list_no = temp_no;
    }
    return j;
}

void quickSort(OMP *omp, int low, int high) {
    if(low < high) {
        int partitionIndex = partition(omp, low, high);
        quickSort(omp, low, partitionIndex-1);
        quickSort(omp, partitionIndex+1, high);
    }
}

void insertionSort(OMP *omp, int low, int high, int size, int list_no) {
    if(low == high) {
        (omp+0)->size = size;
        (omp+0)->list_no = list_no;
    }
    else {
        for(int i = high-1; i >= low ; i--) {
            if((omp+i)->size > size) {
                (omp+i+1)->size = (omp+i)->size;
                (omp+i+1)->list_no = (omp+i)->list_no;
                if(i == low) {
                    (omp+i)->size = size;
                    (omp+i)->list_no = list_no;
                }
            }
            else {
                (omp+i+1)->size = size;
                (omp+i+1)->list_no = list_no;
                break;
            }
        }

    }
}

int main() {
    int t_list;
    cout << "Enter Total Lists : ";
    cin >> t_list;

    int list_no = 1;

    OMP *omp = new OMP[t_list];

    for(int i = 0; i < t_list; i++, list_no++) {
        (omp+i)->list_no = list_no;
        cout << "Enter " << i+1 << " list Size : ";
        cin >> (omp+i)->size;
    }

    //sort the list of their size 
    quickSort(omp, 0, t_list - 1);

    OMP *temp_omp = new OMP[t_list];

    temp_omp = omp;   //copy omp data in temp_omp

    int index = t_list -1;

    //Initialize the cost to zero for first time
    int t_cost = 0;

    if(t_list == 1) {
        t_cost = (omp+0)->size;
    }
    else if(t_list > 1) {
        for( ; 0 < index; index--, list_no++) {

            int temp_cost = (temp_omp+0)->size + (temp_omp+1)->size;

            t_cost = t_cost + temp_cost;

            OMP *temp = new OMP[index];

            for(int j = 2, k = 0; j <= index; j++, k++) {
                (temp+k)->size = (temp_omp+j)->size;
                (temp+k)->list_no = (temp_omp+j)->list_no;
            }

            insertionSort(temp, 0, index -1, temp_cost, list_no);

            temp_omp = (OMP*)realloc(temp_omp, sizeof(OMP) * index);
            temp_omp = temp;
            
            for(int j = 0; j < index; j++) {
                cout << "\n" << (temp_omp+j)->list_no << "\t" << (temp+j)->size;
            }
            cout << "\n";

        }
    }
    cout << "\nTotal Cost : "<< t_cost;
    return 0;
}