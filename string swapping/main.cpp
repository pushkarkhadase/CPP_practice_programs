#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    char str1[10] , str2[10];
    int stringLength = 0;
    char buffer;

    cout << "\n enter the string 1\n";
    cin >> str1;
    cout << "\n enter the string 2\n";
    cin >> str2;

    cout << "\n printing the string 1" << str1;
    cout << "\n printing the string 2" << str2;
    for(int i = 0 ; str1[i]!= '\0' ; i++){
        buffer = str1[i];
        str1[i] = str2[i];
        str2[i] = buffer;
    }
    cout << "\n printing the string 1" << str1;
    cout << "\n printing the string 2" << str2;

    return 0;
}
