#ifndef ALGORITHM
#define ALGORITHM
#include <iostream>
#include <vector>

template<typename T>
class Sorting {
  void swap(T* a, T* b);
  int partir(T* arreglo, int front, int back);
  int max(T* arreglo, int size);
  void csort(T* arreglo, int size, int n);
  public:
  void imparray(T* arreglo, int size);
  void imparray(std::vector<T> arreglo);
  std::vector<T> insertion_sort(std::vector<T> arreglo);
  std::vector<T> bubble_sort(std::vector<T> arreglo);
  void selection_sort(T arreglo[], int size);
  void heapsort(T arreglo[],int size);
  void quick_sort(T* arreglo, int front, int back);
  void radix_sort(T* arreglo, int size);
  void shellsort(T* arreglo, int size);
  void binsort(T* arreglo, int size);
  std::vector<T> brick_sort(std::vector<T> &arr);
  std::vector<T> merge_Sort(std::vector<T> arreglo);
  void countingsort(T *array, int size);
};

template<typename T>
void Sorting<T>::swap(T* a, T* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

template<typename T>
void Sorting<T>::imparray(T* arreglo, int size)
{
  for(int i = 0; i < size; i++)
  {
    std::cout << arreglo[i] << " ";
  }
  std::cout << std::endl;
}

template<typename T>
void Sorting<T>::imparray(std::vector<T> arreglo)
{
  for(int i = 0; i < arreglo.size(); i++)
  {
    std::cout << arreglo[i] << " ";
  }
  std::cout << std::endl;
}

template<typename T>
int Sorting<T>::max(T* arreglo, int size)
{
  int max = arreglo[0];
  for(int i = 1; i < size; i++)
  {
    if(arreglo[i] > max)
    {
      max = arreglo[i];
    }
  }
  return max;
}
#endif
