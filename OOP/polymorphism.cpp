#include<iostream>
using namespace std;

class enemy{
        int x;
    protected:
        int attackpow;
    public:
        void set_attack_pow(int a){
            attackpow = a;
        }
        virtual void attack(){
            cout<<"base attack"<<endl;
        }
};

class ninja : public enemy{
    public:
        ninja(){
        }
        void attack(){
            cout<<"ninja attack : "<<attackpow<<endl;
        }
};

class monster : public enemy{
    public:
        void attack(){
            cout<<"monster eats : "<<attackpow<<endl;
        }
};

int main(){

    // ninja n;
    // monster m;
    // n.set_attack_pow(20);
    // m.set_attack_pow(50);

    // n.attack();
    // m.attack();

    // enemy e = new ninja();

    ninja n;
    enemy *e = &n;

    e->attack();

    return 0;
}