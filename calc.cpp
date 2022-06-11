#include<iostream>

using namespace std;

int main(){
    long long initial_amt = 100000, amt;
    int intrest = 5;
    int years = 10;
    int y_adons = 100000;
    long long total_i = 0;

    amt = initial_amt;

    cout<<"Initial Amount -> "<<initial_amt<<endl;

    for(int i = 1; i <= years; i++){
        total_i = 0;
        for(int j = 0; j < 12; j++){
            total_i += (amt * intrest) / 100;
        }
        amt += total_i;
        cout<<"After "<<i<<" year amt -> "<<amt<<endl;
        amt += y_adons;
    }


    return 0;
}