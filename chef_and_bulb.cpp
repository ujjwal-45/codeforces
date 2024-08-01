// 10 5 5 -> 0,1,2,3,4,5 , 0 % 5 = 0, 5 % 5 = 0, 1, 2, 3 

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
        int n, p, k;
        cin >> n >> p >> k;

        int ans = 0;
        int mod_p = p % k;
        if(n % k <= mod_p - 1){
            ans = (n % k) * (n % k + 1) + (mod_p - n % k) * (n / k);
            ans += (p / k + 1);
        }
        else{
            ans = (mod_p) * (n % k + 1);
            ans += (p / k + 1);
        }
        cout << ans << "\n";
    }

    return 0;
}