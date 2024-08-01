#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 01; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    ll a, b;
    cin >> a >> b;

    ll years = 0;

    while(a <= b){
        a = 3 * a;
        b = 2 * b;
        years++;
    }
    cout << years << endl;

    return 0;
}