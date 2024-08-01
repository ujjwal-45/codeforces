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

    int n, m;
    char c;

    cin >> n >> m >> c;

    vector<string> grid(n);
    rep(i, n){
        cin >> grid[i];
    }

    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    set<char> deputies;

    rep(i, n){
        rep(j, m){
            if(grid[i][j] == c){
                for(auto dir : direction){
                    int new_x = i + dir.first;
                    int new_y = j + dir.second;

                    if(new_x >=0 && new_y >= 0 && new_x < n && new_y < m){
                        char deputy = grid[new_x][new_y];
                        if(deputy != '.' && deputy != c){
                            deputies.insert(deputy);
                        }
                    }
                }
            }
        }
    }

    cout << deputies.size() << endl;

    return 0;
}