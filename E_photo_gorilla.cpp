#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int sz;
    cin >> sz;
    vi v(sz);
    forr(i, 0, sz) cin >> v[i];
    sort(all(v), greater<int>());
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j <= m - k; j++)
        {
            grid[i][j]++;
            if (i + k < n)
                grid[i + k][j]--;
            if (j + k < m)
                grid[i][j + k]--;
            if (i + k < n and j + k < m)
                grid[i + k][j + k]++;
        }
    }
    for (int i = 1; i < n; i++)
        grid[i][0] += grid[i - 1][0];
    for (int j = 1; j < m; j++)
        grid[0][j] += grid[0][j - 1];
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];
        }
    }
    vi vals;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vals.push_back(grid[i][j]);
        }
    }
    sort(all(vals), greater<int>());
    int ans = 0;
    for (int i = 0; i < min(sz, n * m); i++)
    {
        ans += vals[i] * v[i];
    }
    cout << ans << endl;
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