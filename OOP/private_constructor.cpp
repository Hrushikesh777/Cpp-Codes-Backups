#include <iostream>
using namespace std;

class abc{
    int x;
    abc(int a);
    public:
    void display();
    friend class xyz;
};

abc ::abc(int a){
    cout<<"con abc"<<endl;
    x = a;
}

void abc ::display(){
    cout << "data is : " << x << endl;
}

class xyz{
    public:
        xyz(){
            abc a1(5);
            cout<<a1.x<<endl;
            cout<<"con xyz"<<endl;
        }
};

int main(){
    
    xyz x1;

    return 0;
}