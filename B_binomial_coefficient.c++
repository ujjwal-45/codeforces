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
const int max_size = 100000;

vector<vector<ll>> C(max_size + 1, vector<ll>(101, 0));

void precompute()
{
    for (int n = 0; n <= max_size; n++)
    {
        C[n][0] = 1;
        if (n <= 100)
        {
            C[n][n] = 1;
        }
    }

    for (int n = 2; n <= max_size; n++)
    {
        for (int k = 1; k <= min(n, 100); k++)
        {
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) % mod;
        }
    }
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

    vi N(t), k(t);
    forr(i,0,t){
        cin >> N[i];
    }
    forr(i, 0, t)
    {
        cin >> k[i];
    }

    precompute();

    
    for (int i = 0; i < t;i++){
        cout << C[N[i]][k[i]] << endl;
    }

    return 0;
}