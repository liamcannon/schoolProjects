#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printArr(int* arr, int len){
    for (int i = 0; i < len; i++){
        cout << arr[i] <<",";
    }
    cout<<endl;
}


void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
template <typename T>
 void mergeSort(T array[], const int start, const int end)
    {
        int m;
        if(start < end) {
            int m = start + (end - 1) /2;
            mergeSort(array, start, m);
            mergeSort(array, m + 1, end);

            cout << "start: " << array[start] <<" middle : " << array[m] << " end : " << array[end] << endl;
            inplace_merge(array, array + m, &array[end]);
        }
        /*
        m = (end + start) / 2;
        if(end > start) {
            //m = (end + start) / 2;
            mergeSort(array, start, m);
            mergeSort(array, m + 1, end);

            int mid = (v.size()-1)/2;
            
            cout << "--" << endl;
            printArr(&v[0], v.size()-1); 

            inplace_merge(v.begin(), (v.begin() + (v.size() / 2) - 1), v.end());

            printArr(&v[0], v.size()-1);
            cout << "--" << endl;
            
            
            cout << "\n";
            printArr(&v[0], v.size());
            merge(&v[0], 0,mid, v.size()-1);
            printArr(&v[0], v.size());
            
cout<<"\n";
        }
        */
    }

    int main(){
        int arr[] = {10, 2, 7, 1, 4, 3, 9, 8, 6, 5};
printArr(arr, 10);
        mergeSort(arr, 0, 9);
printArr(arr, 10);

    }