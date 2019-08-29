#include "./algorithms.h"

template<typename T>
int Sorting<T>::partir(T* arreglo, int front, int back)
{
  int piv = arreglo[back];
  int e = front-1;
  for(int i = front; i <= back-1; i++)
  {
    if(arreglo[i] < piv) 
    {
      e++;
      swap(&arreglo[e], &arreglo[i]); 
    }
  }
  swap(&arreglo[e+1], &arreglo[back]);
  return e+1;
}

template<typename T>
void Sorting<T>::quick_sort(T* arreglo, int front, int back)
{
  if(front < back)
  {
    int piv = partir(arreglo, front, back);
    quick_sort(arreglo, front, piv-1);
    quick_sort(arreglo, piv+1, back);
  }
}
