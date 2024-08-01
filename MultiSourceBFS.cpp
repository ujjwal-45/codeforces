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

int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

bool isValid(int x, int y, int rows, int cols)
{
    return (x >= 0 && y >= 0 && x < rows && y < cols);
}

bool checkNeighbours(int x, int y, vector<vector<char>>& grid)
{
    int rows = grid.size();
    int cols = grid[0].size();

    rep(i, 4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(!isValid(x,y,rows,cols) || grid[nx][ny] != 'b'){
            return false;
        }
    }
    return true;
}

void MultiSourceBFS(vector<vector<char>> &grid)
{
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    rep(i,rows){
        rep(j,cols){
            if(grid[i][j] == 'b'){
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }
    int ops = 0;
    while(!q.empty()){
        
        auto [x, y] = q.front();
        q.pop();

        if(checkNeighbours(x,y, grid)){
            ops++;
        }

        rep(i,4){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(isValid(nx,ny,rows,cols) && !visited[nx][ny] && grid[nx][ny] == 'b'){
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
    cout << ops << endl;
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

        vector<vector<char>> grid(7, vector<char>(7));
        rep(i, 7)
        {
            rep(j,7){
                cin >> grid[i][j];
            }
        }

        MultiSourceBFS(grid);
    }

    return 0;
}