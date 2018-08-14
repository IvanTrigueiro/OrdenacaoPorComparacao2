#include "MergeSort.h"

MergeSort::MergeSort()
{
    //ctor
}

MergeSort::MergeSort(int left, int right, int *array)
{
    int middle;
    if(left < right){
        middle = (left+right)/2;

        MergeSort(left, middle, array);
        MergeSort(middle+1, right, array);

        merge(left, right, middle, array);
    }
}

void MergeSort::merge(int left, int right, int middle, int *array)
{
    int i, j, k;
    int aux[right - left + 1];
    i = left;
    j = middle + 1;
    k = 0;

    while(i <= middle && j <= right){
        if(array[i] < array[j]){
            aux[k] = array[i];
            k++;
            i++;
        }else{
            aux[k] = array[j];
            k++;
            j++;
        }
    }

    while(i <= middle){
        aux[k] = array[i];
        k++;
        i++;
    }

    while(j <= right){
        aux[k] = array[j];
        k++;
        j++;
    }

    for(i = left; i <= right; i++){
        array[i] = aux[i-left];
    }
}

MergeSort::~MergeSort()
{
    //dtor
}
