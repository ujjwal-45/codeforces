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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        rep(i,n){
            cin >> a[i];
        }

        ll sum = 0;
        int ans = 0;
        int maxn = 0;

        for (int i = 0; i < n;i++){
            sum += a[i];
            maxn = max(maxn, a[i]);
            if(sum - maxn == maxn){
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}