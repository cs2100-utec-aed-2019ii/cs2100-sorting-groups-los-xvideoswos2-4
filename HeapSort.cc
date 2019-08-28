#include <iostream>

using namespace std;

template <class elemento1>
void bucle(elemento1 a[],int tam);
template <class elemento2>
void verificando(elemento2 a[],int i,int tam);
template <class elemento3>
void pila(elemento3 a[],int tam);


int main()
{
    int tam;
    cout<<"Cantidad de elementos: ";
    cin>>tam;
    int a[tam];//se debe cambiar el int por el tipo de arreglo que se desee
    cout<<"Elementos: ";
    for(int i=0;i<tam;i++) {
        cin >> a[i];
    }

    bucle(a,tam);
    pila(a,tam);


    cout<<"Arreglo ordenado: ";
    for(int i =0;i<tam;i++) {
        cout << a[i] << " ";
    }


    return 0;
}
template <class  elemento1>
void bucle(elemento1 a[],int tam){

    for(int i=tam/2;i>=0;i--) {
        verificando(a, i, tam);
    }
}
template <class elemento2>
void verificando(elemento2 a[], int i, int tam)
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
        elemento2 temp = a[mayor];
        a[mayor] = a[i];
        a[i] = temp;
        verificando(a,mayor,tam);
    }
}
template <class elemento3>
void pila(elemento3 a[],int tam){

    int heapSize = tam;
    for(int i=tam;i>=1;i--)
    {
        elemento3 temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        --heapSize;
        verificando(a,0,heapSize);
    }
}
