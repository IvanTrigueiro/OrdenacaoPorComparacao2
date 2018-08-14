#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <algorithm>
class QuickSort
{
    public:
        QuickSort();
        QuickSort(int *array, int left, int right);
        int particao(int *array, int left, int right);
        virtual ~QuickSort();

    private:
        int array[];
        int left, right;
};

#endif // QUICKSORT_H
