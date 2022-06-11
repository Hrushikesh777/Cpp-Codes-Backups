// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define INT_MAX 999999
using namespace std;
void dijkstra(vector<vector<int>>, int, int);
int main()
{
    int t;
    int V;
    cin >> t;
    while (t--)
    {
        cin >> V;

        vector<vector<int>> g(V);

        for (int i = 0; i < V; i++)
        {
            vector<int> temp(V);
            g[i] = temp;
        }

        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cin >> g[i][j];
            }
        }

        int s;
        cin >> s;

        dijkstra(g, s, V);
        cout << endl;
    }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*  Function to implement Dijkstra
*   graph: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/

int *op;

void dfs(int s, vector<vector<int>> graph, bool vis[], int weight)
{
    vis[s] = true;
    op[s] = min(op[s], weight);

    for (int i = 0; i < graph[s].size(); i++)
    {   
        if(s == 2 && i == 1){
            for(int j=0; j<3; j++){
                cout<<vis[j]<<" ";
            }
            cout<<endl;
        }
        if (vis[i] == false)
        {
            cout << s << "->" << i << endl;
            dfs(i, graph, vis, weight + graph[s][i]);
        }
    }
    vis[s] = false;
}

void dijkstra(vector<vector<int>> graph, int src, int V)
{
    // Your code here
    bool *vis = new bool[V];
    op = new int[V];
    for (int i = 0; i < V; i++)
    {
        op[i] = INT_MAX;
        vis[i] = false;
    }
    // cout << "one" << endl;
    dfs(src, graph, vis, graph[src][src]);
    for (int i = 0; i < V; i++)
    {
        cout << op[i] << " ";
    }
    cout << endl;
}