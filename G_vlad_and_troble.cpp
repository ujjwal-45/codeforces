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
#define int long long
#define INF (int)1e18

const ll mod = 1000000007;
const int N = 1e5 + 69;
int n;
int dp[N][3];
vi adj[N];
string s;

void dfs(int u){
    // dp[u][0] = nothing open
    // dp[u][1] = P open
    // dp[u][2] = S open

    dp[u][0] = INF;
    if(s[u] != 'S') dp[u][1] = 0;
    else dp[u][1] = INF;
    if(s[u] != 'P') dp[u][2] = 0;
    else dp[u][2] = INF;

    int total = 0;

    for(int v : adj[u]){
        dfs(v);
        dp[u][1] = dp[u][1] + min({dp[v][1], dp[v][2] + 1, dp[v][0]});
        dp[u][2] = dp[u][2] + min({dp[v][2], dp[v][1] + 1, dp[v][0]});
        total += dp[v][0];
    }

    if(s[u] != 'C')
        total = INF;

    dp[u][0] = min({total, dp[u][1] + 1, dp[u][2] + 1});
}

int_fast64_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        
        cin >> n;
         // creates an array of n vectors
        rep1(i, n) adj[i].clear();
        for (int i = 2; i <= n;i++){
            int x;
            cin >> x;
        }
        
        cin >> s;
        s = "0" + s;

        dfs(1);

        cout << min({dp[1][0], dp[1][1], dp[1][2]}) << endl;
    }

    return 0;
}