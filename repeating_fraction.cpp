#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    unordered_map<int, int> rem;
    vector<int> frac;
    int start;
    int count = 0;
    int n = 94, d = 36;
    int temp = n % d;
    rem[temp] = count;
    count++;
    temp = temp * 10;

    while(true){
        cout<<"temp is : "<<temp<<endl;
        int x = temp % d;
        cout<<"x is : "<<x<<endl;

        if(x == 0){
            frac.push_back(temp / d);
            cout<<"non repeating"<<endl;
            break;
        }

        if(rem.find(x) != rem.end()){
            cout<<"found at : "<<rem[x]<<endl;
            start = rem[x];
            frac.push_back(temp / d);
            break;
        }else{
            rem[x] = count;
            count++;
            // int x = temp*10 / d;
            frac.push_back(temp / d);
            temp = x*10;
        }
    }

    cout << n / d << ".";
    for(int i=0; i<start; i++){
        cout<<frac[i];
    }
    cout<< "(";
    for (int i = start; i < frac.size(); i++){
        cout << frac[i];
    }
    cout << ")" << endl;

return 0;
}