#include<iostream>
using namespace std;

int main(){
    char arr[50];
    cout << "enter name : " << endl;
    cin>>arr;
    cout << "name is : " << arr << endl;
    cout<<"enter name : "<<endl;
    cin.ignore();
    cin.getline(arr, 50);
    cout<<"name is : "<<arr<<endl;
    cout<<"enter name again : "<<endl;
    cin.getline(arr, 50);
    cout<<"name is : "<<arr<<endl;
    return 0;
}