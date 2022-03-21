#include <iostream>

using namespace std;

void insertionSort(int unsortedArray[] , int n = 0){
    int i,j,x = 0;
    for(i = 1 ; i < n ; i++){
            j = i-1;
            x = unsortedArray[i];
        while(j > -1 && unsortedArray[j] > x){
            unsortedArray[j+1] = unsortedArray[j];
            j--;
        }
        unsortedArray[j+1] = x;
    }

    cout << "\nArray have been sorted\n";
}
int main()
{
    int unsortedArray[5] = {8,5,7,3,2};
    int n = 5;
    cout << "Performing the Insertion sort\n" << endl;

    insertionSort(unsortedArray,n);
    return 0;
}
