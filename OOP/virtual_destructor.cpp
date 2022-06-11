#include <iostream>

using namespace std;

class base
{
public:
    int a;
    base(int val)
    {
        a = val;
        cout << "Constructing base \n";
    }
    virtual ~base()
    {
        cout << "Destructing base \n";
    }
};

class derived : public base
{
public:
    int b;
    derived(int val1, int val2):base(val1)
    {
        b = val2;
        cout << "Constructing derived \n";
    }
    ~derived()
    {
        cout << "Destructing derived \n";
    }
};

int main(void)
{
    base *b = new derived(2,3);
    // base *b = d;
    // delete b;
    // base b;
    // derived d(2, 3);

    // cout<<d.a<<endl;
    // cout<<d.b<<endl;
    delete b;
    return 0;
}