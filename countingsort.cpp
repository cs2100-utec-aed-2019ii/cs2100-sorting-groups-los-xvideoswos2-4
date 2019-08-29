#include "algorithms.h"

template <typename T>
T maximo(T array[], int size) {
    T max = array[0];
    for(int i = 1; i<size; i++) {
        if(array[i] > max)
            max = array[i];
    }
    return max;
}

template <typename T>
void Sorting<T>::countingsort(T *array, int size){

    T output[size];
    int max = maximo(array, size);

    T count[max];

    for(int i = 0; i<max; i++) {
        count[i] = 0;
    }
    for(int i = 0; i <size; i++) {
        if(array[i]==0){
            count[array[i]]++;
        }
        else {
            count[(array[i] - 1)]++;
        }
    }
    for(int i = 1; i<max; i++) {
        count[i] += count[i - 1];
    }
    for(int i = size-1; i>=0; i--) {
        output[(count[(array[i]-1)]-1)] = array[i];
        count[array[i]-1] -= 1;
    }
    for(int i = 0; i<size; i++) {
        array[i] = output[i];
    }
}

