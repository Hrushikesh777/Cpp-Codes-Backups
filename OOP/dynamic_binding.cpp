#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"Base Class"<<endl;
    }
};

class derived : public base{
    public:
    void display(){
        cout<<"Derived Class"<<endl;
    }
};

int main(){

    base *bptr = new base;
    bptr->display();
    bptr = new derived;
    bptr->display();


    return 0;
}