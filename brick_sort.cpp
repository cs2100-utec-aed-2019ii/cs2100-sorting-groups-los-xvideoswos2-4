#include "algorithms.h"

template <class T>
void Sorting<T>::brick_sort(vector<T>&arr) 
{ 
    bool ordenado = false; 
    int temp;
    int n = arr.size();
    while (!ordenado) 
    { 
        ordenado = true;          
        for (int i=1; i<=n-2; i=i+2) 
        { 
            if (arr[i] > arr[i+1]) 
             { 
                int temp = arr[i+1];
                arr[i+1] =arr[i];
                arr[i]=temp;
                ordenado = false; 
              } 
        } 
        for (int i=0; i<=n-2; i=i+2) 
        { 
            if (arr[i] > arr[i+1]) 
            { 
                int temp = arr[i+1];
                arr[i+1] =arr[i];
                arr[i]=temp;
                ordenado= false; 
            } 
        } 
    } 
  
    return arr; 
} 
