#include "./algorithms.h"
#include <vector>

template <typename T>
std::vector<T> Sorting<T>::bubble_sort(std::vector<T> arreglo)
{
    int n = arreglo.size();
    std::vector<T> arr;
    for(int i = 0;i<n;i++){
        arr.push_back(arreglo[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp1 = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp1;
            }
            
        }
    }
    return arr;
}
