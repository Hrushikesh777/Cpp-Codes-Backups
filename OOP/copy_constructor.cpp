#include<iostream>
#include<cstring>
using namespace std;

class String{
    string str;
    int *a;
    public:
        String(string s){
            str = s;
            a = new int(8);
        }
        // user defined copy constructor
        String(const String &s){
            str = s.str;
            a = new int(*s.a); // if pointer variables used with default copy constructer, is causes shallow copy
        }
        void print(){
            cout<<str<<" "<<*a<<endl;
        }
        void change(const string s){
            str = s;
            *a = 10;
        }
};

// String :: String(const char *s){
//     str = new char[strlen(s)+1];
//     strcpy(str, s);
// }

// void String :: change(const char *s){
//     delete []str;
//     str = new char[strlen(s) + 1];
//     strcpy(str, s);
// }

// String :: String(const String &s){
//     str = new char[strlen(s.str)+1];
//     strcpy(str, s.str);
// }

int  main(){
    String s1("Hrushi");
    String s2 = s1;
    cout<<"before change"<<endl;
    s1.print();
    s2.print();
    cout<<"after change"<<endl;
    s2.change("Rushi");
    s1.print();
    s2.print();
    return 0;
}