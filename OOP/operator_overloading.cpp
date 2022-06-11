#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(8){}    

        //prefix, not needed any dummy arguments
        void operator++(){     
            num = num+2;     
        }   

        // postfix, needed any dummy arguments, design standards
        void operator++(int){     
            num = num+2;     
        }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};  

// This will not work -> https://stackoverflow.com/questions/23505423/why-c-operator-overloading-requires-having-at-least-one-parameter-of-class-ty
// void operator++(int &num){
//     num++;
// }
int main()    
{    
    Test tt;    
    tt++;  // calling of a function "void operator ++()"    
    tt.Print();    
    return 0;    
}

/*
structure vs class
*/