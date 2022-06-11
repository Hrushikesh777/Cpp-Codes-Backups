#include<iostream>
using namespace std;

class abc{
    int x;
    public:
        abc();
        abc(int a);
        void display();
};

abc :: abc(){
    x = 0;
}

abc :: abc(int a){
    x = a;
}

void abc :: display(){
    cout<<"data is : "<<x<<endl;
}

int main(){
    abc temp, temp1(2);
    abc temp3 = temp1;

    temp.display();
    temp1.display();
    temp3.display();

    return 0;
}