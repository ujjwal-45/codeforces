#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int32_t main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        float k;
        cin >> k;

        int p = k, q = 1;

        p = p * 100;
        q = q * 100;

        p = p / p;
        q = q / p;
        
        if(float(p/q) == k){
            cout << "YES" << endl;
            cout << p << " " << q;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}