#include<iostream>
using namespace std;

class abc{
    private:
    static int count;
    int x;
    int y;
    public:
    void getdata();
    void putdata(int a, int b);
    static void show_count();
};

int abc :: count;

void abc :: putdata(int a, int b){
    x = a;
    y = b;
    count++;
}

void abc :: getdata(){
    cout<<"x : "<<x<<" y : "<<y<<endl;
    // cout<<"count is : "<<count<<endl;
}

void abc :: show_count(){
    cout<<"count is : "<<count<<endl;
}

int main(){

    abc temp, temp1;

    temp.putdata(4,5);
    temp.getdata();
    temp.show_count();

    temp1.putdata(3,2);
    temp1.getdata();
    temp1.show_count();

    

    return 0;
}