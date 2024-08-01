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

    ll n;
    cin >> n;
    vector<ll> v(n+1), v_sort(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v_sort[i] = v[i];
    }

    sort(v_sort.begin(), v_sort.end());
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1], v_sort[i] += v_sort[i - 1];
    }


    int m;
    cin >> m;
    for (int i = 1; i <= m;i++)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if(type == 1){
            cout << v[r] - v[l - 1] << endl;
        }
        else{
            cout << v_sort[r] - v_sort[l - 1] << endl;
        }

    }

    return 0;
}