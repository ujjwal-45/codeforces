#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    ll n, h;
    cin >> n >> h;

    ll width = 0;

    rep(i,n){
        ll x;
        cin >> x;

        if(x > h){
            width += 2;
        }
        else{
            width += 1;
        }
    }

    cout << width << endl;

    return 0;
}