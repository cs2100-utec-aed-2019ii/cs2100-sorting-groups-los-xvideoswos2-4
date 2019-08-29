#include "./algorithms.h"

template<class T>
vector<T> Sorting<T>::insertion_sort(vector<T> arreglo)
{
    int n = arreglo.size();
    vector<T> arr;
    for(int i = 0;i<n;i++){
        arr.push_back(arreglo[i]);
    }

    for(i = 1;n>i;i++){
        x= arr[i]; j = i-1; 
        while(j>=0&& x <arr[j]){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1] = x;
        } 
    //-----------
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return arr;
}