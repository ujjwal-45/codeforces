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

    int n, k;
    cin >> n >> k;
    vi heights(n);
    rep(i,n){
        cin >> heights[i];
    }

    int min_sum = INT_MAX;
    int curr_sum = 0;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += heights[i];
        j = i;
    }

    min_sum = curr_sum;
    j = 0;

    for (int i = k; i < n;i++){
        curr_sum += heights[i] - heights[i - k];
        if(curr_sum < min_sum){
            min_sum = curr_sum;
            j = i - k + 1;
        }
    }
    
    cout << j + 1 << endl;
    return 0;
}