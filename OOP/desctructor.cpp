#include<iostream>
using namespace std;

class Test{
public:
    Test(){
        cout<<"Constructor called."<<endl;
    }
    virtual ~Test(){
        cout<<"Destrutor called."<<endl;
    }
};

class derived : public Test{
public:
    derived(){
        cout<<"derived constructor called."<<endl;
    }
    ~derived(){
        cout<<"derived desctructor called."<<endl;
    }
};

int main(){
    // Test t;
    // derived d;
    Test *t = new derived();
    delete t;
    // {
    //     derived d;
    // }
    return 0;
}

/*
https://www.geeksforgeeks.org/virtual-destructor/
*/