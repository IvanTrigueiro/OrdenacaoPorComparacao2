#include "QuickSort.h"

QuickSort::QuickSort()
{
    //ctor
}

QuickSort::QuickSort(int *array, int left, int right)
{
    if(left < right){
        int pivoIndex = particao(array, left, right);
        QuickSort(array, left, pivoIndex - 1);
        QuickSort(array, pivoIndex + 1, right);
    }

}

int QuickSort::particao(int *array, int left, int right)
{
    int pivo = array[right];
    int partIndex = left;

    for(int i = left; i < right; i++){
        if(array[i] <= pivo){
            std::swap(array[i], array[partIndex]);
            partIndex++;
        }
    }
    std::swap(array[partIndex], array[right]);
    return partIndex;
}

QuickSort::~QuickSort()
{
    //dtor
}
