#include <iostream>
#include "./algorithms.h"
#include "./bubble_sort.cpp"
#include "./quicksort.cpp"
#include "./radixsort.cpp"
#include "./shellsort.cpp"
#include "./selectionsort.cpp"
#include "./heapsort.cpp"
#include "./binsort.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Sorting<int> a;
  int arreglo[] = {8, 3, 6, 4, 2, 5, 7, 1};
  a.binsort(arreglo, 8);
  a.imparray(arreglo, 8);
  return 0;
}
