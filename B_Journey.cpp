#include<bits/stdc++.h>
using namespace std;

typedef long double lld;
typedef long long ll;

lld dfs(ll curr, ll parent, vector<vector<int>>& edges)
{
    lld val = 0;
    int nchild = 0;

    for(int node : edges[curr]){
        if(node != parent){
            ++nchild;
            val += dfs(node, curr, edges) + 1;
        }
    }
    if(nchild == 0){
        return 0;
    }
    return 1 + val / nchild;
}

int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> edges(n+5);
        for (int i = 0; i < n - 1;i++){
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        lld value = dfs(0, -1, edges);

        cout << fixed << setprecision(15) << value << endl;
    }

    return 0;
}