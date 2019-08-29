#include "./algorithms.h"
#include <vector>

template<class T>
std::vector<T> Sorting<T>::insertion_sort(std::vector<T> arreglo)
{
    int n = arreglo.size();
    std::vector<T> arr;
    for(int i = 0;i<n;i++){
      arr.push_back(arreglo[i]);
    }
    for(int i = 1;n>i;i++){
      int x= arr[i], j = i-1; 
      while(j>=0&& x <arr[j]){
          arr[j+1]=arr[j];
          j--;
          }
      arr[j+1] = x;
    } 
    return arr;
}
