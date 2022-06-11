#include<iostream>
using std::cout;
using std::endl;

class Test{
public:
    int a;

    Test setData(int a){
        this->a = a;
        return *this;
    }
    void printData(){
        cout<<"a is -> "<<a<<endl;
    }
};

int main(){
    Test t;
    Test t2;
    t2 = t.setData(10);
    t.printData();
    t2.setData(20);
    t.printData();
    t2.printData();

    return 0;
}