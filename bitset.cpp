#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;

int main(){
    bitset<32> bst1;
    bitset<32> bst2(3);

    bst1[4] = 1;
    cout<<bst1<<endl;
    
    int temp = 8;
    bitset<32> bset(temp);
    cout<<bset<<endl;
    cout<<"in decimal : "<<bset.to_ulong()<<endl;
    cout<<bset.size()<<endl;
    // here indexing start in opposite direction
    for(int i= 31; i >= 0; i--){
        cout<<i<<" "<<bset[i]<<endl;
    }
    // cout<<"val : ";
    // cout<<bset[2]<<endl;

    //set bits in bitset
    // cout<<"set bits count is : "<<bset.count()<<endl;

    // any function returns true, if atleast 1 bit
    // is set
    // if(bset.any()){
    //     cout<<"contains set bits"<<endl;
    // }

    // none function returns true, if none of the bit
    // is set
    // bitset<8> set8; // 00000000
    // if(set8.none()){
    //     cout<<"does not contains any set bit"<<endl;
    // }

    //size
    // cout<<"size is : "<<bset.size()<<endl;

    //set() -> sets all bits
    // bset.set(pos, b) makes bset[pos] = b
    //cout << set8.set(4, 0) << endl;
    // bset.set(pos) makes bset[pos] = 1  i.e. default is 1
    //cout << set8.set(4) << endl;

    // reset function makes all bits 0
    //cout << set8.reset(2) << endl; -> reset only second bit
    //cout << set8.reset() << endl; -> reset all bits

    // flip function flips all bits i.e.  1 <-> 0 and  0 <-> 1
    //cout << set8.flip(2) << endl; -> filps second bit
    //cout << set8.flip() << endl; -> filp all bits

    return 0;
}