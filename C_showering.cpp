#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define all(a) a.begin(),a.end()
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
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> intervals(n);
        rep(i,n){
            cin>>intervals[i].first >> intervals[i].second;
        }

        bool shower = false;

        if(intervals[0].first >= s){
            shower = true;
        }

        for (int i = 1; i < n && !shower;i++){
            if ((intervals[i].first - intervals[i - 1].second) >= s)
            {
                shower = true;
            }
        }

        if((m - intervals[n-1].second) >= s){
            shower = true;
        }

        if(shower){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}