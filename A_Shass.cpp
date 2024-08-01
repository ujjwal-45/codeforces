#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int x, y;
    cin >> m;
    rep1(i, m)
    {
        cin >> x >> y;
        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    }
    rep1(i , n)
        cout << a[i] << endl;

    return 0;
}