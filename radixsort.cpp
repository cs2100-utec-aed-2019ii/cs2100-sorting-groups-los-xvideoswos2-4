#include "./algorithms.h"

template<typename T>
void Sorting<T>::radix_sort(T* arreglo, int size)
{
  int maxi = max(arreglo, size);
  for(int i = 1; i < maxi/i; i++)
  {
    csort(arreglo, size, i);
  }
}

template<typename T>
void Sorting<T>::csort(T* arreglo, int size, int n)
{
  int salida[size];
  int count[10] = {0};
  for(int i = 0; i < size; i++)
  {
    count[(arreglo[i]/n)%10]++;
  }
  for(int i = 1; i < 10; i++)
  {
    count[i] += count[i-1];
  }
  for(int i = size-1; i >= 0; i--)
  {
    salida [count[(arreglo[i]/n)%10]-1] = arreglo[i];
    count[(arreglo[i]/n)%10]--;
  }
  for(int i = 0; i < size; i++)
  {
    arreglo[i] = salida[i];
  }
}
