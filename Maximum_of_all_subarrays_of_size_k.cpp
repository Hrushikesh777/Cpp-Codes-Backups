#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    set<int, greater<int>> arr;

    while (t--)
    {
        cin >> n >> k;
        long *temp = new long[n];

        for(int i=0; i<n; i++){
            cin>>temp[i];
        }

        for (int i = 0; i <n; i++)
        {
            arr.insert(temp[i]);
            // cout<<"set is : "<<endl;
            // for(auto i = arr.begin(); i != arr.end(); i++){
            //     cout<<*i<<endl;
            // }
            if (i >= k - 1)
            {
                auto itr = arr.begin();
                cout << *itr << " ";
                arr.erase(temp[i - (k - 1)]);
            }
        }
    }
    return 0;
}