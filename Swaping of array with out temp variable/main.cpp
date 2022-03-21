#include <iostream>

using namespace std;

void swapArrays(int arr1[] ,int arr2[] , int arraySize){
    for (int i = 0 ; i < arraySize ; i++){
        /*
        a = 5;
        b = 6;
        a = a+b;
        a = 5+6 => 11;
        b = a-b;
        b = 11 - 6 => 5
        a = a - b;
          = 11 - 5 => 6;
        a = 6;
        */
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }

    cout << "\n printing the swaped array \n";
     for (int i = 0 ;  i< arraySize ; i++){
        cout << arr1[i]<< "\t";
    }

    for (int i = 0 ;  i< arraySize ; i++){
        cout << arr2[i] << "\t";
    }
}

int main()
{
    int arraySize = 0;
    int arr1[10], arr2[10];

    cout << "\n enter the size of the array \n";
    cin >> arraySize;

    cout << "\n enter the elements of the array 1 \n";
    for(int i = 0 ; i < arraySize ; i++){
        cin >> arr1[i];
    }

    cout << "\n enter the elements of the array 2 \n";
    for(int i = 0 ; i < arraySize ; i++){
        cin >> arr2[i];
    }
    cout << "\n printing both arrays";
    for (int i = 0 ;  i< arraySize ; i++){
        cout << arr1[i]<< "\t";
    }

    for (int i = 0 ;  i< arraySize ; i++){
        cout << arr2[i] << "\t";
    }

    swapArrays(arr1 , arr2 , arraySize);

    return 0;
}
