#include<iostream>
using namespace std;

void staircase(int n){
    int blank_counter = n -1 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= blank_counter ; j++){
            cout << " ";
        }
        for(int j = 1 ; j <= (n - blank_counter); j++){
            cout << "#";
        }
        cout<<endl;
        blank_counter--;
    }
}

int main(){
    int dim = 0;
    cin >> dim;
    staircase(dim);
    return 0;
}
