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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n, m;
    cin >> n >> m;

    vvi adj(n+1);
    rep1(i,m){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int noOfGroups = 0;
    while(true){
        vector<int> degree;
        rep1(i,n){
            if(adj[i].size() == 1){
                degree.push_back(i);
            }
        }
        if(degree.empty())
            break;

        for (int i = 0; i < degree.size();i++){
            int nei = adj[degree[i]].front(); // nei
            adj[degree[i]].clear(); // clear current leaf node
            auto it = find(adj[nei].begin(), adj[nei].end(), degree[i]);
            if(it != adj[nei].end()){
                adj[nei].erase(it); // clear leaf node from nei adj list
            }
        }
        noOfGroups++;
    }

    cout << noOfGroups << endl;

    return 0;
}