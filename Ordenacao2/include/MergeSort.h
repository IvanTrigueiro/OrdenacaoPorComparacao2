#ifndef MERGESORT_H
#define MERGESORT_H


class MergeSort
{
    public:
        MergeSort();
        MergeSort(int left, int right, int *array);
        void merge(int left, int right, int middle, int *array);
        virtual ~MergeSort();

    private:
        int left, right;
        int array[];
};

#endif // MERGESORT_H
