#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 998244353;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int n = (ll)s.size();

        ll min_ops = 0, fact = 1, ans = 1, k = 0;

        vector<ll> v;

        for (int i = 1; i < n;i++){
            if(s[i] == s[i-1]){
                k++;
            }
            else{
                min_ops += k;
                k++;
                ans = (ans % mod * k % mod) % mod;
                k = 0;
            }
        }
        if(k != 0){
            min_ops += k;
            k++;
            ans = (ans % mod * k % mod) % mod;
        }
        for (int i = 1; i <= min_ops;i++){
            fact = ((fact % mod) * (i % mod)) % mod;
        }

        ans = ((ans % mod) * (fact % mod)) % mod;

        cout << min_ops << " " << ans << endl;
    }

    return 0;
}