#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<long> arr;

        for(int i=0; i<n; i++){
            arr.push_back(0);
        }
        for (int i = 1; i <= ceil(n / 2); i++){
            cin>>arr[(i*2)-1];
        }
        int i;
        if(n % 2 == 0){
            i = n-2;
        }else{
            i = n-1;
        }

        while(i >= 0){
            cin>>arr[i];
            i -= 2;
        }
        cout<<"after for loop"<<endl;
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}