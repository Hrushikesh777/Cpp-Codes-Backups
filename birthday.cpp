
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t, n, x;
    deque<int> dq;
    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        int *arr = new int[n];
        dq.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int t_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (t_sum < x)
            {
                dq.push_back(arr[i]);
                t_sum += arr[i];
            }
            else if (t_sum == x)
            {
                cout << "YES"<< "\n";
                continue;
            }
            else
            {
                while (t_sum > x)
                {
                    cout<<"in while"<<endl;
                    int temp = dq.front();
                    t_sum -= temp;
                    dq.pop_front();
                    if (t_sum == x)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                }
                dq.push_back(arr[i]);
                t_sum += arr[i];
            }
            cout << "t_sum : " << t_sum << endl;
        }
        cout << "t_sum : " << t_sum << endl;
        while(t_sum > x){
            cout << "in while" << endl;
            int temp = dq.front();
            t_sum -= temp;
            dq.pop_front();
            if(t_sum == x){
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout << "NO"<< "\n";
    }
    return 0;
}
