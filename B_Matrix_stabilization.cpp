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

bool isValid(vector<vector<int>> &matrix, int i, int j){
    int n = matrix.size();
    int m = matrix[0].size();
    int curr_cell = matrix[i][j];

    if(i > 0 && matrix[i-1][j] >= curr_cell) return false;
    if(i < n-1 && matrix[i+1][j] >= curr_cell) return false;
    if(j > 0 && matrix[i][j-1] >= curr_cell) return false;
    if(i < m-1 && matrix[i][j+1] >= curr_cell) return false;

    return true;
}

void solve(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    bool found;

    do{
        found = false;
        int min_i = -1, min_j = -1;

        rep(i,n){
            rep(j,m){
                if(isValid(matrix, i, j)){
                    if(min_i == -1 || i < min_i || (i == min_i && j < min_j)){
                        min_i = i;
                        min_j = j;
                    }
                }
            }
        }

        if(min_i != -1 && min_j != -1){
            matrix[min_i][min_j]--;
            found = true;
        }
    } while (found);
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        rep(i,n){
            rep(j,n){
                cin >> matrix[i][j];
            }
        }

        solve(matrix);

        rep(i,n){
            rep(j,m){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}