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
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        rep(i, n){
            cin >> a[i];
        }

        int f_occurance = a[f-1], f_c = 0;
        
        sort(a.begin(), a.end(), greater<int>());

        bool l = false;
        rep(i, k)
        {
            if (a[i] == f_occurance)
            {
                l = true;
                break;
            }
        }

        bool r = false;
        for (int i = k; i < n;i++)
        {
            if (a[i] == f_occurance)
            {
                r = true;
                break;
            }
        }

        if(l && r){
            cout << "MAYBE" << "\n";
        }
        else if (l && !r){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
        }

    return 0;
}