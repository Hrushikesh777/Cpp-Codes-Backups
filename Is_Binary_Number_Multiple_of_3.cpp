#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    string str;

    while(t--){

        cin>>str;
        bitset<100> bset(str);
        int odd = 0, even = 0;
        for(int i=0; i<100; i++){
            if(bset[i] == 1){
                if(i % 2 == 0){
                    even++;
                }else{
                    odd++;
                }
            }
        }

        cout<<"op is : "<<even - odd<<endl;

    }

    return 0;
}