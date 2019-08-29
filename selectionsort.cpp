#include "./algorithms.h"

template <typename T>
void Sorting <T>::selection_sort(T arreglo[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arreglo[i]>arreglo[j]){
                T temp = arreglo[j];
                arreglo[j]=arreglo[i];
                arreglo[i]=temp;
            }
        }
    }
}

