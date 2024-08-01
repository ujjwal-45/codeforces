//



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
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        rep(i, m){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int ni = 0, sum = 0;
        for (int i = 0; i < m;i++){
            sum += (a[i] + 1);
            if(sum >= m){
                ni = i;
                break;
            }
        }
        cout << (m - ni - 1)<< "\n";
    }

    return 0;
}