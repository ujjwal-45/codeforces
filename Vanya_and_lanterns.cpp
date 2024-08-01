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

    int n, l;
    cin >> n >> l;

    int max_dist = 0;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    for(int i=1;i<n;i++){
        int dist = a[i] - a[i - 1];
        max_dist = max(max_dist, dist);
    }

    double ans = double(max(max_dist / 2.0, max(a[0] - 0.0, l - a[n - 1]*1.0)));

    cout << fixed << setprecision(10)<< ans << endl;

    return 0;
}