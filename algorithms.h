#ifndef ALGORITHM
#define ALGORITHM
#include <iostream>

template<typename T>
class Sorting {
  void swap(T* a, T* b);
  int partir(T* arreglo, int front, int back);
  public:
  void imparray(T* arreglo, int size);
  //void insertion_sort(T* arreglo, int size);
  void bubble_sort(T* arreglo, int size);
  //void selection_sort(T* arreglo, int size);
  void quick_sort(T* arreglo, int front, int back);
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
#endif
