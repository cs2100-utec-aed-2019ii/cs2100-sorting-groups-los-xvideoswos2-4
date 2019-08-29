#include "algorithms.h"
#include <vector>

template <class T>
std::vector<T> Sorting<T>::brick_sort(std::vector<T>&arr) 
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
