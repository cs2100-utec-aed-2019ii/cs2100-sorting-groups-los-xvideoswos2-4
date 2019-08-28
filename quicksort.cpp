#include "./algorithms.h"

template<typename T>
int Sorting<T>::partir(T* arreglo, int front, int back)
{
  int piv = arreglo[back];
  int e = front;
  for(int i = front; i <= back-1; i++)
  {
    if(arreglo[i] < piv) 
    {
      swap(&arreglo[e], &arreglo[i]); 
      e++;
    }
  }
  swap(&arreglo[e], &arreglo[back]);
  return e;
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
