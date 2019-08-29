#include "./algorithms.h"
#include <stdlib.h>

struct bucket 
{
  int count;
  int* value;
};

template<typename T>
void Sorting<T>::binsort(T* arreglo, int size)
{
  struct bucket buckets[3];
  for (int i = 0; i < 3; i++)
  {
    buckets[i].count = 0;
    buckets[i].value = (int*)malloc(sizeof(int) * size);
  }
  
  for (int i = 0; i < size; i++)
  {
    if (arreglo[i] < 0)
    {
      buckets[0].value[buckets[0].count++] = arreglo[i];
    }
    else if (arreglo[i] > 10)
    {
      buckets[2].value[buckets[2].count++] = arreglo[i];
    }
    else
    {
      buckets[1].value[buckets[1].count++] = arreglo[i];
    }
  }
  for (int k = 0, i = 0; i < 3; i++)
  {
    selection_sort(buckets[i].value, buckets[i].count);
    for (int j = 0; j < buckets[i].count; j++)
    {
      arreglo[k + j] = buckets[i].value[j];
    }
    k += buckets[i].count;
    free(buckets[i].value);
  } 
}

