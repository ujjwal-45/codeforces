#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        ll n, mex, max;
        cin>>n>>mex>>max;
        ll max_sum = 0;

        if(mex - max > 1 || n < mex){
            cout << -1 << endl;
            continue;
        }

        if(mex == max){
            max--;

        }

            for (int i = 0; i < n;i++){
                if(mex > i){
                    max_sum += i;
                }
                else{
                    max_sum += max;
                }
            
            }
        cout << max_sum << endl;
    }

    return 0;
}