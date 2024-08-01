#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

vector<int> permutation;
int n_perm = 4, perm_cnt = 0;
bool is_visited[4];

void get_perm(int i = 0){
    if(i == n_perm){
        ++perm_cnt;
        return;
    }
    rep(j, n_perm){
        if(is_visited[j]){
            continue;
        }
        permutation.push_back(j);
        is_visited[j] = 1;

        get_perm(i + 1);

        is_visited[j] = 0;
        permutation.pop_back();
    }
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    fast;

    vector<int> p = {0, 1, 2, 3};

    do{
        ++perm_cnt;
    } while (next_permutation(p.begin(), p.end()));

    cerr << perm_cnt;
    get_perm();
    
    return 0;
}