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

    ll n;
    cin >> n;

    vector<vector<ll>> problems(n, vector<ll>(3));
    ll no_of_prob = 0;
    
        rep(i, n){
            rep(j, 3){
                cin >> problems[i][j];
        }
        }

    
    for(auto& problem :problems){
        ll cnt = problem[0] + problem[1] + problem[2];
        if (cnt > 1)
        {
            no_of_prob++;
        }
    }

    cout << no_of_prob << endl;

    return 0;
}