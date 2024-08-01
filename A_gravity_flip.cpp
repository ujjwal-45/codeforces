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

    int n;
    cin >> n;
    vector<int> cols(n);
    rep(i, n){
        cin >> cols[i];
    }
    sort(cols.begin(), cols.end());
    
    rep(i, n){
        cout << cols[i] << " ";
    }
    cout << endl;

    return 0;
}