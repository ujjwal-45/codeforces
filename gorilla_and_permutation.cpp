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

vector<int> solve(vi arr, int n, int m){
    reverse(arr.begin(), arr.end());
    reverse(arr.begin() + n - m, arr.end());

    return arr;
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
        int n, m, k;
        cin >> n >> m >> k;

        vi arr(n);
        rep(i,n){
            arr[i] = i + 1;
        }

        vi arr2 = solve(arr, n, m);

        rep(i,n){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}