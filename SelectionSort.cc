#include <iostream>

using namespace std;


int main(){

    int tam;
    cout<<"Tamaño del arreglo: ";
    cin>>tam;
    int a[tam];
    cout<<"Elementos: ";
    for(int i=0;i<tam;i++) {
        cin >> a[i];
    }

    //SelectionSort
    for(int i=0;i<tam;i++){
        for(int j=i+1;j<tam;j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    cout<<"Arreglo ordenado: ";
    for(int i =0;i<tam;i++) {
        cout << a[i] << " ";
    }


    return 0;
}
