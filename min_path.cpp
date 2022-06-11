#include <iostream>
using namespace std;

int op, n, m, x, y;

void find_path(int **arr, int i, int j, int count)
{
    cout<<i<<" "<<j<<endl;
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 0)
    {
        return;
    }

    if (i == x && j == y)
    {
        op = count;
    }

    arr[i][j] = 0;
    find_path(arr, i + 1, j, count + 1);
    find_path(arr, i, j + 1, count + 1);
    find_path(arr, i - 1, j, count + 1);
    find_path(arr, i, j - 1, count + 1);
}

int main()
{
    //code
    int t;
    cin >> t;

    while (t--)
    {
        op = 0;
        cin >> n >> m;
        int **arr = new int *[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[m];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        cin >> x >> y;
        cout<<"one"<<endl;
        find_path(arr, 0, 0, 0);
        if (op == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << op << "\n";
        }
    }
    return 0;
}