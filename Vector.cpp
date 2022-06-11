#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

    vector<int> arr;
    vector<vector<int>> test;

    /*Insert Data in vector*/
    for(int i=0;i<5;i++){
        arr.push_back(i);
    }

    test.push_back(arr);

    cout<<&arr<<endl;

    // here need to use &, so that we can modify values in 1d/2d vector with auto keyword
    for(auto& x : test){
        x[0] = 100;
    }

    for(auto x : test[0]){
        cout<<x<<" ";
    }
    cout<<endl;

    // /*Iterate on vector*/
    // cout<<"output with begin and end"<<endl;
    // for(auto i=arr.begin(); i != arr.end(); i++){
    //     cout<<*i<<endl;
    // }
    // /*Another simple method*/
    // cout<<"Another method"<<endl;
    // for (int i = 0; i < arr.size(); i++){
    //     cout<<arr[i]<<endl;
    // }
    

    // /*Iterate vector in reverse order*/
    // cout<<"output with rbegin and rend"<<endl;
    // for(auto i=arr.rbegin(); i != arr.rend(); i++){
    //     cout<<*i<<endl;
    // }

    // cout<<"No of elements in vector : "<<arr.size()<<endl;

    // cout<<"Is vector is emplty : "<<arr.empty()<<endl;

    // /*Access Specific Element*/
    // cout<<"Element at position 3 : "<<arr[3]<<endl;
    // cout<<"Element at position 3 : "<<arr.at(3)<<endl;

    // cout<<"Insert element at begining : "<<endl;
    // arr.insert(arr.begin(),5);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<"Insert element at end : "<<endl;
    // arr.insert(arr.end(),8);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<"Insert element at pos 3 : "<<endl;
    // arr.insert(arr.begin()+3,7);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<"Sorting of vector : "<<endl;
    // sort(arr.begin(), arr.end());

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<"Sorting in reverse order : "<<endl;
    // sort(arr.begin(), arr.end(), greater<int>());

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<"Sum of vector is : "<<accumulate(arr.begin(), arr.end(), 0)<<endl;

    // cout<<"max element is : "<<*max_element(arr.begin(), arr.end())<<endl;

    // cout<<"min element is : "<<*min_element(arr.begin(), arr.end())<<endl;

    return 0;
}