#include <iostream>

using namespace std;

template <class  tipo1>
void Ordenamiento(tipo1 a[],int tam);

int main(){

    int tam;
    cout<<"Tamaño del arreglo: ";
    cin>>tam;
    int a[tam]; //se debe cambiar el int por el tipo de arreglo que se desee
    cout<<"Elementos: ";
    for(int i=0;i<tam;i++) {
        cin >> a[i];
    }

    //SelectionSort
    Ordenamiento(a,tam);

    cout<<"Arreglo ordenado: ";
    for(int i =0;i<tam;i++) {
        cout << a[i] << " ";
    }


    return 0;
}

template <class tipo1>
void Ordenamiento(tipo1 a[],int tam){

    for(int i=0;i<tam;i++){
        for(int j=i+1;j<tam;j++){
            if(a[i]>a[j]){
                tipo1 temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
