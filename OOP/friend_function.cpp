#include<iostream>
using namespace std;

class xyz;
class abc{
    int val1;
    public:
        void set_data(int x);
        friend void swap_data(abc &, xyz &);
        friend void display(abc, xyz);
};

void abc :: set_data(int x){
    val1 = x;
}

class xyz{
    int val2;
    public:
        void set_data(int x);
        friend void swap_data(abc &, xyz &);
        friend void display(abc, xyz);
};

void xyz ::set_data(int x){
    val2 = x;
}

void swap_data(abc &a1, xyz &x1){
    int temp = a1.val1;
    a1.val1 = x1.val2;
    x1.val2 = temp;
}

void display(abc a1, xyz x1){
    cout<<a1.val1<<" "<<x1.val2<<endl;
}

int main(){

    abc a1;
    a1.set_data(10);

    xyz x1;
    x1.set_data(20);

    display(a1, x1);

    swap_data(a1, x1);

    display(a1, x1);

    return 0;
}