#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

int Time = 0;
bool dfs(int node, int src, int p, int dest, vvi &adj, vi &visited, vi &result){
    if(node == dest){
        return true;
    }
    for(int el : adj[node]){
        if(el == p){
            continue;
        }
        if(node == src && el == p){
            continue;
        }
        if(visited[el] == 0){
            if(dfs(el, src, node, dest, adj, visited, result)){
                result.push_back(el);
                return true;
            }
        } 
    }
    return false;
}

void dfsBR(int u, int p, vector<vector<int>> &adj, vector<int> &low, vector<int> &disc, set<pair<int, int>> &br)
{
    low[u] = disc[u] = ++Time;
    for (int v : adj[u])
    {
        if (v == p)
            continue;

        if (!disc[v])
        {
            dfsBR(v, u, adj, low, disc, br); // recursive DFS call
            if (disc[u] < low[v])            // condition to find a bridge
                br.insert({u, v});
            low[u] = min(low[u], low[v]); // low[v] might be an ancestor of u
        }
        else
        {
            low[u] = min(low[u], disc[v]); // finds the ancestor with the least discovery time
        }
    }
}

    void solve()
{
    int n, m;
    cin >> n >> m;
    vvi adj(n + 1);
    vvi adjj(n + 1);
    vector<pair<int, int>> edges;
    vi weight(m);
    rep(i, m){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
        weight[i] = w;
    }

    vi low(n + 1, 0), disc(n + 1, 0);
    set<pair<int, int>> br;

    Time = 0;
    for (int u = 1; u <= n;u++){
        if(!disc[u]){
            dfsBR(u, u, adj, low, disc, br);
        }
    }
    adj.clear();
    int mina = -1, minb = -1, c = 1e9;
    int ind = 0;
    for(auto it : edges){
        if (br.find({it.first, it.second}) == br.end() && br.find({it.second, it.first}) == br.end())
        {
            adjj[it.first].push_back(it.second);
            adjj[it.second].push_back(it.first);
            
            if(c > weight[ind]){
                c = weight[ind];
                mina = it.first;
                minb = it.second;
            }
        }
        ind++;
    }
    cout << c << " ";

    vi visited(n + 1,0);
    vi result;

    dfs(mina, mina, mina, minb, adjj, visited, result);
    result.push_back(mina);
    cout << result.size() << endl;

    for(int el : result){
        cout << el << " ";
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}