#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; ++i)
#define forr1(i,x,n) for (int i = x; i <= n; ++i)
#define all(a) a.begin(),a.end()
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
        int n,k;
        cin >> n >> k;

        vector<int> v(k,0);
        forr(i, 0, k)
        {
            int b, c;
            cin >> b >> c;
            v[b - 1] += c;
        }

        sort(v.rbegin(), v.rend());

        int ans = 0;

        forr(i,0,min(n,k)){
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}