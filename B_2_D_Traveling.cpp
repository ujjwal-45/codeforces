#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector < pair<ll, ll> cities(n);
        for (ll i = 0; i < n;i++){
            cin >> cities[i];
        }

        if(k == 0 && n <= 2){
            for (auto& point : cities){
                ll xi = point.first;
                ll yi = point.first;
                for (auto& point2: cities[i])
                {
                    ll xj = point2.first;
                    ll yj = point2.first;

                    ll result = abs(xi - xj) + abs(yi - yj);
                }
            }
            cout << result << endl;
        }
        else{
            
        }
    }

    return 0;
}