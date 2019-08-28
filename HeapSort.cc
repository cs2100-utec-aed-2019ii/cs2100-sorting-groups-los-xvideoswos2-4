#include <iostream>

using namespace std;


void verificando(int a[],int i,int tam);


int main()
{
    int tam;
    cout<<"Cantidad de elementos: ";
    cin>>tam;
    int a[tam];
    cout<<"Elementos: ";
    for(int i=0;i<tam;i++) {
        cin >> a[i];
    }

    for(int i=tam/2;i>=0;i--) {
        verificando(a, i, tam);
    }

    int heapSize = tam;
    for(int i=tam;i>=1;i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        --heapSize;
        verificando(a,0,heapSize);
    }
    cout<<"Arreglo ordenado: ";
    for(int i =0;i<tam;i++) {
        cout << a[i] << " ";
    }


    return 0;
}

void verificando(int a[], int i, int tam)
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
        int temp = a[mayor];
        a[mayor] = a[i];
        a[i] = temp;
        verificando(a,mayor,tam);
    }
}

