#include<iostream>

using namespace std;

int birthdayCakeCandles(int hight_list[100000] , int candles_amount){
    int highest_num_hold = hight_list[0];
    int candle_count = 0;

    for(int i = 1 ; i < candles_amount ; i++){
        if(highest_num_hold < hight_list[i]){
            highest_num_hold = hight_list[i];
        }
    }

    for(int i = 0 ; i < candles_amount ; i++){
        if(hight_list[i] == highest_num_hold){
            candle_count++;
        }
    }

    return candle_count;
}


int main(){
    int number_of_candles = 0;
    int candle_hight_list_argument [100000];
    int tall_candle_ammount = 0;
    cin >> number_of_candles;

    for(int i = 0 ; i < number_of_candles ; i++){
        cin >> candle_hight_list_argument[i];
    }

    tall_candle_ammount = birthdayCakeCandles(candle_hight_list_argument , number_of_candles);
    cout << tall_candle_ammount;
    return 0;
}
