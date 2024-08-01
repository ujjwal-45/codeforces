#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
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
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, n){
            cin >> a[i];
        }
        int ops = 0;
        int max_gift = a[0];

        rep(i, n){
            if(max_gift > a[i]){
                max_gift = a[i];
            }
            else{
                ops++;
            }
        }
        cout << ops << endl;
    }

    return 0;
}