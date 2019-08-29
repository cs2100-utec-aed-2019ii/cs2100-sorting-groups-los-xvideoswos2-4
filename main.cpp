#include <iostream>
#include <vector>
#include "./algorithms.h"
#include "./bubble_sort.cpp"
#include "./quicksort.cpp"
#include "./radixsort.cpp"
#include "./shellsort.cpp"
#include "./selectionsort.cpp"
#include "./heapsort.cpp"
#include "./binsort.cpp"
#include "./insertion_sort.cpp"
#include "./merge_sort.cpp"
#include "./brick_sort.cpp"
#include "./countingsort.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Sorting<int> a;
  int insertion[] = {1, 8, 3, 7, 2, 9};
  int bubble[] = {1, 8, 3, 7, 2, 9};
  int selection[] = {1, 8, 3, 7, 2, 9};
  int heap[] = {1, 8, 3, 7, 2, 9};
  int quick[] = {1, 8, 3, 7, 2, 9};
  int radix[] = {1, 8, 3, 7, 2, 9};
  int shell[] = {1, 8, 3, 7, 2, 9};
  int bin[] = {1, 8, 3, 7, 2, 9};
  int brick[] = {1, 8, 3, 7, 2, 9};
  int merge[] = {1, 8, 3, 7, 2, 9};
  int counting[] = {1, 8, 3, 7, 2, 9};

  vector<int> vinsertion(insertion, insertion+6);
  vector<int> vbubble(bubble, bubble+6);
  vector<int> vbrick(brick, brick+6);
  vector<int> vmerge(merge, merge+6);

  a.selection_sort(selection, 6);
  a.heapsort(heap, 6);
  a.quick_sort(quick, 0, 5);
  a.radix_sort(radix, 6);
  a.shellsort(shell, 6);
  a.binsort(bin, 6);
  a.countingsort(counting, 6);

  cout << "Insertion Sort: ";
  a.imparray(a.insertion_sort(vinsertion));
  cout << "Bubble Sort: ";
  a.imparray(a.bubble_sort(vbubble));
  cout << "Selection Sort: ";
  a.imparray(selection, 6);
  cout << "Merge Sort: ";
  a.imparray(a.merge_Sort(vmerge));
  cout << "Heap Sort: ";
  a.imparray(heap, 6);
  cout << "Quick Sort: ";
  a.imparray(quick, 6);
  cout << "Shell Sort: ";
  a.imparray(shell, 6);
  cout << "Bin Sort: ";
  a.imparray(bin, 6);
  cout << "Radix Sort: ";
  a.imparray(radix, 6);
  cout << "Brick Sort: ";
  a.imparray(a.brick_sort(vbrick));
  cout << "Counting Sort: ";
  a.imparray(counting, 6);
  return 0;
}
