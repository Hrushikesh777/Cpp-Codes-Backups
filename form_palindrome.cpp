#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//skgeegks
// int check_paindrome(vector<char> arr,int x, int y){

// }

int check_front(vector<char> arr){
    int i,j,count = 0;
    i = 0;
    j = arr.size() - 1;

    while(true){
        cout<<"i is "<<i<<endl;
        cout<<"j is "<<j<<endl;

        if(arr[i] != arr[j]){
            arr.insert(arr.begin()+j+1,arr[i]);
            i = 0;
            j = arr.size() - 1;
            count++;
        }else{
            i++;
            j--;
        }
        if(i == j || i>j){
            break;
        }

        for (int k = 0; k < arr.size(); k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"count is : "<<count<<endl;
}

// int check_back(vector<char> arr)
// {
//     int i, j, count = 0;
//     i = 0;
//     j = arr.size() - 1;

//     while (true)
//     {
//         cout << "i is " << i << endl;
//         cout << "j is " << j << endl;

//         if (arr[i] != arr[j])
//         {
//             if(arr[i] == arr[j-1]){
//                 cout<<"one"<<endl;
//                 arr.insert(arr.begin() + i, arr[j]);
//             }else if(arr[i+1] == arr[j]){
//                 cout<<"two"<<endl;
//                 arr.insert(arr.begin() + j, arr[i]);
//             }else{
//                 cout<<"three"<<endl;
//                 arr.insert(arr.begin() + j + 1, arr[i]);
//             }
//             i = 0;
//             j = arr.size() - 1;
//             count++;
//         }
//         else
//         {
//             i++;
//             j--;
//         }
//         if (i == j || i > j)
//         {
//             break;
//         }

//         for (int k = 0; k < arr.size(); k++)
//         {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "count is : " << count << endl;
// }

int main()
{
    string str;
    getline(cin, str);

    vector<char> arr;

    for (int i = 0; i < str.length(); i++){
        arr.push_back(str[i]);
    }
    // reverse(arr.begin(), arr.end());
    int front = check_front(arr);
    return 0;
}