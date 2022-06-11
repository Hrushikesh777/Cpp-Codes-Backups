/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> op;
int isNotVisited(int x, vector<int> &path)
{
    for (int i = 0; i < path.size(); i++)
    {
        if (x == path[i])
        {
            return 0;
        }
    }
    return 1;
}

void find_paths(vector<vector<int>> &graph, int src, int dst)
{
    cout << "src is : " << src << endl;
    cout << "dst is : " << dst << endl;
    queue<vector<int>> q;
    vector<int> path;
    path.push_back(src);
    q.push(path);

    while (!q.empty())
    {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
        // cout << "last is : " << last << endl;
        if (last == dst)
        {
            // cout << "oone" << endl;
            op.push_back(path);
            // cout<<"size is : "<<op.size()<<endl;
            // continue;
        }
        else
        {
            // cout << "in else" << endl;
            // cout << graph[last].size() << endl;
            for (int i = 0; i < graph[last].size(); i++)
            {
                // cout << "otwo" << endl;
                if (isNotVisited(graph[last][i], path))
                {
                    // cout << "node is : " << graph[last][i] << endl;
                    path.push_back(graph[last][i]);
                    q.push(path);
                    path.pop_back();
                }
            }
        }
    }
}

int main()
{
    int n, t, c;
    long m;
    cin >> n >> m >> t >> c;

    vector<vector<int>> graph;
    graph.resize(n + 1);

    int a, b;
    // int count = 0;
    while (m--)
    {
        // count++;
        cin >> a >> b;
        // cout<<a<<" "<<b<<endl;
        graph[a].push_back(b);
        // graph[b].push_back(a);
        if (m == 0)
        {
            cout << a << b << endl;
        }
    }
    // cout<<"count is : "<<count<<endl;
    cout << "one" << endl;
    int x, y;
    cin >> x >> y;
    cout << "x " << x << " y" << y << endl;

    find_paths(graph, x, y);
    cout << "two" << endl;
    int size = 99999, o_cost = 99999;
    vector<int> out;
    for (int i = 0; i < op.size(); i++)
    {
        int cost = 0;
        for (int j = 1; j < op[i].size(); j++)
        {
            // cout<<op[i][j]<<" ";
            cost += c;
            if (j == op[i].size() - 1)
            {
                break;
            }
            int mod = cost % t;
            cost += mod;
        }
        // cout<<endl;
        if (op[i].size() < size && cost < o_cost)
        {
            size = op[i].size();
            out = op[i];
        }
    }
    cout << "done" << endl;
    cout << size << endl;
    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << " ";
    }
    return 0;
}