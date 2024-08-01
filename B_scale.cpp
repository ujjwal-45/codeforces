#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

vvi reduce(vvi& grid, int k){
    int n = grid.size();
    int new_size = n / k;

    vvi new_grid(new_size, vi(new_size));

    rep(i,new_size){
        rep(j,new_size){
            new_grid[i][j] = grid[i * k][j * k];
        }
    }
    return new_grid;
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
        int n, k;
        cin >> n >> k;

        vvi grid(n, vi(n));
        rep(i,n){
            rep(j,n){
                cin >> grid[i][j];
            }
        }

        vvi new_grid = reduce(grid, k);

        int new_size = n / k;

        rep(i, new_size)
        {
            rep(j, new_size)
            {
                cout << new_grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}