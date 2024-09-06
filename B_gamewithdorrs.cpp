#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
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
        int l, r;
        cin >> l >> r;

        int L,R;
        cin >> L >> R;

        int segment = min(r, R) - max(l, L) + 1;
        int ans = segment - 1;

        if(segment<=0){
            ans = 1;
        }
        else{
            ans += (l != L);
            ans += (r != R);
        }
        cout << ans << endl;
    }

    return 0;
}