#include <iostream>
using namespace std;

// if class has at least 1 pure virtual function, then it is abstract class.
class Animal{
public:
    // this is pure virtual function, helps to achieve run time polymorphism and forces derived class to
    // implement this method.
    virtual void display() = 0;

    // this is virtual fuction, helps to achieve run time polymorphism.
    // virtual void display(){
    //     cout<<"I'am animal"<<endl;
    // }
};

class Dog : public Animal{
public:
    void display(){
        cout<<"It is dog class"<<endl;
    }
};


class Cat : public Animal{
public:
    void display(){
        cout<<"It is cat class"<<endl;
    }
};


int main(){
    Animal *animal1 = new Dog();
    animal1->display(); 

    Animal *animal2 = new Cat();
    animal2->display();

    return 0;
}

/*
-> https://www.youtube.com/watch?v=T8f4ajtFU9g
*/