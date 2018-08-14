#include <iostream>
#include "MergeSort.h"
#include "QuickSort.h"
using namespace std;

int main()
{
    int n, i;
    cout << "Digite o numero de elementos a ser ordenado: " <<endl;
    cin >> n;

    int array[n];
    for(i = 0; i < n; i++){
        cout << "Digite o elemento " << i+1 << ": ";
        cin >> array[i];
    }

    int digito;
    cout << "\nDigite 1 para MergeSort ou 2 para QuickSort: ";
    cin >> digito;

    switch(digito)
    {
        case 1:
            MergeSort(0, n-1, array);

            cout << "\n Array Ordenado: ";
            for(i = 0; i < n; i++){
                if(i == 0){
                    cout << array[i];
                }
                else{
                    cout << " -> " << array[i];
                }
            }
            break;
        case 2:
            QuickSort(array, 0, n-1);

            cout << "\n Array Ordenado: ";
            for(i = 0; i < n; i++){
                if(i == 0){
                    cout << array[i];
                }
                else{
                    cout << " -> " << array[i];
                }
            }
            break;

        default:
            cout << "Valor invalido" <<endl;
    }

    return 0;
}
