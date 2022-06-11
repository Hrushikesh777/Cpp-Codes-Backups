#include <iostream>
using namespace std;
class Account
{
    int accno;   // data member (also instance variable)
public:
    string name; // data member(also instance variable)
    static float rateOfInterest;
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    void display()
    {
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }

    static void getCurentIntrest(){
        cout<<"Intrest is -> "<<rateOfInterest<<endl;
    }
};

float Account::rateOfInterest=6.5;
int main(void)
{
    Account::rateOfInterest = 8;
    Account a1 = Account(201, "Sanjay"); // creating an object of Employee
    // a1.rateOfInterest = 7;
    Account a2 = Account(202, "Nakul");  // creating an object of Employee
    a1.display();
    a2.display();
    Account::getCurentIntrest();
    return 0;
}