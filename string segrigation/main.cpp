#include <bits/stdc++.h>
//all special functions of string and stl are available


using namespace std;

int main()
{
    string str;
    string temp = "";
    cout << "input string" << endl;
    cin >> str;

    cout <<endl << str << endl;

    for(int i = 0 ; i < str.length() ; i++){
        for(int j = i+1 ; j< str.length() ; j++){
            if(str[i]>str[j]){
                    swap(str[i],str[j]);
            }
        }
    }

    cout << endl<< str;

    return 0;

}
/*
range of asci
A-Z = 65 - 90
a-Z = 97 - 122
0-9 = 48 - 57
*/




