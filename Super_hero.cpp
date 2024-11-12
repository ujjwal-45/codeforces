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

const int mx = 1e6;
vi v(mx+1);

void sieve(){
    for (int i = 2; i <= mx;++i){
        if(v[i] ==0){
            for (int j = i;j <= mx; j += i)
            {
                if(v[j]==0){
                    v[j] = i;
                }
            }
        }
    }
}

ll count(ll h){
    ll cnt = 0;
    while(h>1){
        int prime = v[h];
        while(h%prime==0){
            h /= prime;
            cnt += 1;
        }
    }
    return cnt;
}

ll floor(ll k){
    return k > 0 ? log2(k) : 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll H, K;
        cin >> H >> K;

        ll h = count(H);
        ll k = floor(K);
        cout << h+k << endl;
    }

    return 0;
}