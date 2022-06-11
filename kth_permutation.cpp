#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int k = 100;
    set<int> nums;
    vector<int> fac, op;
    fac.push_back(1);

    for (int i = 1; i <= n; i++)
    {
        nums.insert(i);
        fac[i] = i * fac[i - 1];
    }

    cout << fac[n] << endl;

    cout << endl;

    // cout<<"last fac -> "<<fac[fac.size() - 1]<<endl;

    while (k > 1)
    {
        // cout<<"k is -> "<<k<<endl;
        for (auto x : nums)
        {
            int temp = fac[n - 1 - op.size()];
            if (temp < k)
            {
                // cout<<"one"<<endl;
                k -= temp;
            }
            else
            {
                // cout<<"one"<<endl;
                op.push_back(x);
                nums.erase(x);
                break;
            }
        }
    }
    cout << "k is -> " << k << endl;
    for (auto x : nums)
    {
        op.push_back(x);
    }
    cout << endl;

    for (auto x : op)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}