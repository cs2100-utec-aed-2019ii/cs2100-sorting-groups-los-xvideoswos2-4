#include <iostream>
#include "./algorithms.h"
#include "./bubble_sort.cpp"
#include "./quicksort.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Sorting<int> a;
  int arreglo[] = {8, 3, 6, 4, 2, 5, 7, 1};
  a.quick_sort(arreglo, 0, 7);
  a.imparray(arreglo, 8);
  return 0;
}
