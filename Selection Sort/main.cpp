#include <iostream>

using namespace std;

void selectionSort(int sortingArray[10] , int n = 0){
    int i , j , k = 0;

    for(i = 0 ; i < n-1 ; i++){
       for(j = k = i; j < n ; j++){
            if(sortingArray[j]<sortingArray[k]) k = j;
       }
       swap(sortingArray[i],sortingArray[k]);
    }

    cout << "\n Displaying the array \n";
    for(i = 0 ; i < n ; i++){
        cout << '\t' << sortingArray[i];
    }
}

int main()
{
    int unsortedArray[6] = {8,6,3,2,5,4};
    int n = 6;
    cout << "\n Performing the Selection Sort \n";
    selectionSort(unsortedArray , n);
    return 0;
}
