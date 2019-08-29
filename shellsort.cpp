#include "./algorithms.h"

template<typename T>
void Sorting<T>::shellsort(T* arreglo, int size)
{
  int temp, e;
  for(int step = size/2; step > 0; step /= 2)
  {
    for(int i = step; i < size; i++)
    {
      temp = arreglo[i];
      for(e =  i; e >= step && arreglo[e - step] > temp ; e -= step)
      {
        arreglo[e] = arreglo[e - step];
      }
      arreglo[e] = temp;
    }
  }
}
