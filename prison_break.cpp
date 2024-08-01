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

const int INF = 1e9;
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {1, -1, 0, 0};

int n, m;
vector<string> grid;
int distA[1000][1000], distM[1000][1000];

bool isReachedBoundary(int x, int y)
{
    return x == 0 || x == n - 1 || y == 0 || y == m - 1;
}

void bfs(queue<pair<int, int>>& q, int dist[1000][1000]){
   while(!q.empty()){
       int x, y;
       tie(x, y) = q.front();
       q.pop();

       rep(i, 4){
           int nx = x + dx[i];
           int ny = y + dy[i];

           if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '.' && dist[nx][ny] = INF){
               dist[nx][ny] = dist[x][y] + 1;
               q.push({nx, ny});
           }
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

    cin >> n >> m;
    grid.resize(n);

    queue<pair<int, int>> qM, qA;
    rep(i, n){
        cin >> grid[i];
        rep(j, m){
            if(grid[i][j] == 'M'){
                qM.push({i, j});
                distM[i][j] = 0;
            }
            else{
                distM[i][j] = INF;
            }
            if (grid[i][j] == 'A')
            {
                qM.push({i, j});
                distM[i][j] = 0;
            }
            else
            {
                distM[i][j] = INF;
            }
        }
    }

    bfs(qM, distM);
    bfs(qA, distA);

    rep(i, n){
        if(grid[i][0] == '.' && distA[i][0] < distM[i][0]){
            cout << "YES";
            return 0;
        }
        if (grid[i][m-1] == '.' && distA[i][m-1] < distM[i][m-1])
        {
            cout << "YES";
            return 0;
        }
    }

    rep(j, n)
    {
        if (grid[0][j] == '.' && distA[0][j] < distM[0][j])
        {
            cout << "YES";
            return 0;
        }
        if (grid[n-1][j] == '.' && distA[n-1][j] < distM[n-1][j])
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO" << "\n";
    return 0;
}