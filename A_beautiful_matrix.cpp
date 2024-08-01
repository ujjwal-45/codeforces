#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int dfs(int i, int j){
    return abs(2 - i) + abs(2 - j);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    vector<vector<ll>> matrix(5, vector<ll>(5));
    rep(i,5){
        rep(j, 5){
            cin >> matrix[i][j];
     
        }
    }

    ll moves = 0;
    rep(i, 5)
    {
        rep(j, 5)
        { 
            if(matrix[i][j] == 1){
                moves = dfs(i, j);
            }
        }
    }

    cout << moves << endl;

    return 0;
}