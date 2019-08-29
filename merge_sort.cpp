#include "./algorithms.h"


template<class T>
void merge(vector<T> & vec);
template<class T>
void combinar(vector<T>&left,vector<T>& right,vector<T>& vec_1);


template<class T>
void merge(vector<T> & vec) {
    if (vec.size() <= 1) return;

    int mid = vec.size() / 2;
    vector<T> left;
    vector<T> right;

    for (size_t j = 0; j < mid;j++)
        left.push_back(vec[j]);
    for (size_t j = 0; j < (vec.size()) - mid; j++)
        right.push_back(vec[mid + j]);

    merge(left);
    merge(right);
    combinar(left, right, vec);
}

template<class T>
void combinar(vector<T>&left, vector<T>& right, vector<T>& vec_1)
{
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR) 
    {
        if (left[j] < right[k]) {
            vec_1[i] = left[j++];
        }
        else {
            vec_1[i] = right[k++];
        }
        i++;
    }
    while (j < nL) {
        vec_1[i] = left[j++];
        i++;
    }
    while (k < nR) {
        vec_1[i] = right[k++];
        i++;
    }
}
template<class T>
vector<T> Sorting<T>::merge_Sort(vector<T>arreglo){
    int n = arreglo.size();
    vector<T> arr;
    for(int i = 0;i<n;i++){
        arr.push_back(arreglo[i]);
    }
    merge(arr);
    return arr;
}
