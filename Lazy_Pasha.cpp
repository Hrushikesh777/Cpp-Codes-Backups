#include<iostream>
#include<string>
using namespace std;

int main(){

    long int t, n, k, x, y, ptr=0,flag=0;
    string str1;
    cin>>t;

    while(t--){
        cin>>n>>k;
        cin>>str1;

        // cout<<"string is : "<<str1<<endl;
        // cout<<"length is : "<<str1.length()<<endl;
        // cout << "element is : " << str1[32063]<<endl;

        while (k--)
        {
            cin>>x>>y;
            cout<<"x is : "<<x<<" y is : "<<y<<endl;
            if(x == 1){
                cout<<"in one"<<endl;
                long int temp = y % n;
                if(flag == 0){
                    ptr = n - temp;
                    flag = 1;
                }else{
                    ptr = ptr - temp;
                    if(ptr < 0){
                        ptr = ptr + n;
                    }
                }
                cout<<"ptr is : "<<ptr<<endl;
            }
            
            if(x == 2){
                cout<<"in two"<<endl;
                long int temp = ptr + y;
                // cout<<"a"<<endl;
                if(temp >= n){
                    // cout<<"b"<<endl;
                    temp = temp - n;
                    cout<<str1[temp];
                }else{
                    // cout<<"c"<<endl;
                    cout<<str1[temp];
                    // cout<<"d"<<endl;
                }
            }
        }
    }

    return 0;
}