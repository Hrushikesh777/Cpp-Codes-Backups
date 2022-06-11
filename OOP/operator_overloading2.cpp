#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book{
    string name;
    int price;
public:

    Book(string name, int price){
        this->name = name;
        this->price = price;
    }

    void print(Book &b){
        cout<<b.name<<" "<<b.price<<endl;
    }
};

// we need to pass 2 arguments here as it is not member of any class
ostream& operator<<(ostream &cout, Book &b){
    b.print(b);
    return cout;
}

class Library{
    vector<Book> books;
public:
    // as it is member of class first argument(i.e. class object) passed automatically
    void operator+=(Book &b){
        books.push_back(b);
    }

    void operator-=(Book &b){
        books.pop_back();
    }

    void print(){
        for(Book b : books){
            b.print(b);
        }
    }
};

int main(){
    Book b1("book1", 100);
    Book b2("book2", 200);
    // cout<<b1.name<<endl;
    // cout<<b1;

    Library lab;
    lab += b1;
    lab += b2;
    lab.print();
    return 0;
}