#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define for(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for(i,n){
            cin >> a[i];
            cin >> b[i];
        }

        int res = 0, ans = 0, bmax = 0;

        for(j,n){
            if(k == j){
                break;
            }

            res += a[j];
            bmax = max(bmax, b[j]);
            ans = max(ans + (k - j - 1) * bmax, ans);
        }

        cout << ans << endl;
    }

    return 0;
}