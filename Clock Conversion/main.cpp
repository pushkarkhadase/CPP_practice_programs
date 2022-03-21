#include <iostream>

using namespace std;

void timeConversion(string clock_12){
    //10:53:45PM
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    hours = (clock_12[0] - '0') * 10 + (clock_12[1] - '0');
    minutes = (clock_12[3] - '0') * 10 + (clock_12[4] - '0');
    seconds = (clock_12[6] - '0') * 10 + (clock_12[7] - '0');

    if (hours < 12 && clock_12[8] == 'P') hours += 12 ;
    if (hours == 12 && clock_12[8] == 'A') hours = 0;

    printf("%02d:%02d:%02d\n", hours , minutes , seconds);


}

int main(){
    string input_string;
    string clock_24;
    cin >> input_string;

    timeConversion(input_string);

    return 0;
}
