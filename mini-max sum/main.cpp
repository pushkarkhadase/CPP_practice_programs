#include <iostream>
using namespace std;

void miniMaxSum(int arr[]){

    for(int j = 0 ; j < 5 ; j++){
        for(int i=0; i< 4 ; i++){
            if(arr[i] > arr[i+1]){
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }


    int sum = 0 ;

    for(int i=0; i< 4 ; i++){
            sum += arr[i];
    }
    cout <<sum <<' ';

    int j = 4;

   int max_sum = 0;

    while(j>0){


            max_sum  =  max_sum + arr[j];
            j--;

    }
    cout << max_sum;

}

int main(){
    int input_array [5];

    for(int i = 0 ; i < 5 ; i++){
        cin >> input_array[i];
    }
    miniMaxSum(input_array);
    return 0;
}
