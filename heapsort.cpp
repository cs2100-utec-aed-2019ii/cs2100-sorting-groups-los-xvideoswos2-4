#include "algorithms.h"

template <typename T>
void verificando(T a[], int i, int tam)
{
    int left = (2*i)+1;
    int right = (2*i)+2;
    int mayor = i;
    if(left <= tam && a[i]<a[left])
        mayor = left;
    if(right <= tam && a[mayor]<a[right])
        mayor = right;

    if(mayor != i)
    {
        T temp = a[mayor];
        a[mayor] = a[i];
        a[i] = temp;
        verificando(a,mayor,tam);
    }
}

template <typename T>
void Sorting<T>::heapsort(T arreglo[],int size){
    size--;
    for(int i=size/2;i>=0;i--) {
        verificando(arreglo, i, size);
    }

    int heapSize = size;
    for(int i=size;i>=1;i--)
    {
        T temp = arreglo[0];
        arreglo[0] = arreglo[i];
        arreglo[i] = temp;
        --heapSize;
        verificando(arreglo,0,heapSize);
    }
}



