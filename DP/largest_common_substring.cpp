#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;

    int **arr = new int*[str1.length() + 1];

    for(int i=0; i<=str1.length(); i++){
        arr[i] = new int[str2.length() + 1];
    }

    for(int i=0; i <= str1.length(); i++){
        for(int j=0; j <= str2.length(); j++){
            arr[i][j] = 0;
        }
    }

    int max_ = 0;
    for (int i = 1; i <= str1.length(); i++){
        for (int j = 1; j <= str2.length(); j++){
            if(str1[i-1] == str2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
                if(arr[i][j] > max_){
                    max_ = arr[i][j];
                }
            }else{
                arr[i][j] = 0;
            }
        }
        cout<<endl;
    }

    for (int i = 0; i <= str1.length(); i++){
        for (int j = 0; j <= str2.length(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"max count is : "<<max_<<endl;

    return 0;
}