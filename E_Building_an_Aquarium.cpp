#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin>>t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> columns(n + 1);
        for (int i = 0; i < n;i++){
            cin >> columns[i];
        }
        ll low = 0, high = 2000000007;

        while(low < high){
            ll mid = low + (high - low + 1) / 2;
            ll total_water = 0;
            for (int i = 0; i < n; i++)
            {
                total_water += max(mid - columns[i], 0LL);
            }

            if(total_water <= x){
                low = mid;
            }
            else {
                high = mid - 1;
            }
            
    }
    cout << low << endl;
    }

        return 0;
}