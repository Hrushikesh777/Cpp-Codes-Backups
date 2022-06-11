#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    unordered_set<string> arr;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();

        int **table = new int*[n];
        for(int i=0; i<n; i++){
            table[i] = new int[n];
        }

        for (int i = 0; i < n; i++)
        {
            table[i][i] = 1;
            arr.insert(str.substr(i,1));
        }

        for (int i = 0; i < n - 1; ++i)
        {
            if (str[i] == str[i + 1])
            {
                table[i][i + 1] = 1;
                arr.insert(str.substr(i, 2));
            }
        }

        for (int k = 3; k <= n; k++)
        {
            for (int i = 0; i < n - k + 1; i++)
            {
                int j = i + k - 1;
                if (table[i + 1][j - 1] == 1 && str[i] == str[j])
                {
                    table[i][j] = 1;
                    arr.insert(str.substr(i, k));
                }
            }
        }
        cout<<"strings are : "<<endl;
        for (auto itr = arr.begin(); itr != arr.end(); ++itr)
        {
            cout << *itr << endl;
        }
        cout<<"count is : "<<arr.size()<<endl;
    }
    return 0;
}