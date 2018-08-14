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
    int pivoIndex = left;

    for(int i = left; i < right; i++){
        if(array[i] <= pivo){
            std::swap(array[i], array[pivoIndex]);
            pivoIndex++;
        }
    }
    std::swap(array[pivoIndex], array[right]);
    return pivoIndex;
}

QuickSort::~QuickSort()
{
    //dtor
}
