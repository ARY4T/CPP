#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void bipartite(ll &zro, ll &one, int n, vector<vector<int>> &adj)
{
    vector<int> vis(n + 1, -1);

    int colr = 0;
    zro++;

    colr = !colr;

    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while (!q.empty())
    {
        int n = q.size();
        for (int j = 0; j < n; ++j)
        {
            int node = q.front();
            q.pop();

            for (int i = 0; i < adj[node].size(); ++i)
            {
                if (vis[adj[node][i]] == -1)
                {
                    vis[adj[node][i]] = 1;

                    q.push(adj[node][i]);
                    if (colr == 0)
                        zro++;
                    else
                        one++;
                }
            }
        }
        colr = !colr;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll zro = 0, one = 0;

    bipartite(zro, one, n, adj);

    cout << zro * one - (n - 1);
}