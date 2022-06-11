#include<iostream>
#include<vector>
using namespace std;

class IceCream{
protected:
    string size;
public:
    IceCream(string size){
        this->size = size;
    }

    virtual void printIceCream() = 0;
};

class Ice1 : public IceCream{
    int price;
public:
    Ice1(string size, int price): IceCream(size){
        this->price = price;
    }

    void printIceCream(){
        cout<<"Ice 1 -> "<<this->price<<" "<<this->size<<endl;
    }
};

class Ice2 : public IceCream{
    int price;
public:
    Ice2(string size, int price): IceCream(size){
        this->price = price;
    }
    void printIceCream(){
        cout<<"Ice 2 -> "<<this->price<<" "<<this->size<<endl;
    }
};

class order{
    static int cnt;
    string id;
    vector<IceCream*> iceCreams;
public:
    order(vector<IceCream*> iceCreams){
        // hash<int> hf;
        this->id = to_string(order::cnt);
        this->iceCreams = iceCreams;
        // cout<<this->id<<endl;
        order::cnt++;
    }

    void print_order(){
        // this->iceCreams[0]->printIceCream();
        // this->iceCreams[1]->printIceCream();
        cout<<"order id -> "<<this->id<<endl;
        for(int i = 0; i < this->iceCreams.size(); i++){
            this->iceCreams[i]->printIceCream();
        }
    }
};

int order::cnt = 0;

class Customer{
    string name;
    vector<order*> orders;
public:
    Customer(string name){
        this->name = name;
    }

    void add_order(order* o){
        this->orders.push_back(o);
    }

    void print_customer_orders(){
        cout<<"customer name -> "<<this->name<<endl;
        for(order* x : orders){
            x->print_order();
        }
    }
};

int main(){
    IceCream *i1 = new Ice1("s", 100);
    // i1->printIceCream();
    IceCream *i2 = new Ice2("s", 200);
    // i2->printIceCream();
    vector<IceCream*> icecreams;
    icecreams.push_back(i1);
    icecreams.push_back(i2);

    order *o1 = new order(icecreams);
    // o1->print_order();

    IceCream *i3 = new Ice1("m", 100);
    vector<IceCream*> icecreams2;
    icecreams2.push_back(i3);

    order *o2 = new order(icecreams2);

    Customer c("rushi");
    c.add_order(o1);
    c.add_order(o2);

    c.print_customer_orders();
    

    return 0;
}