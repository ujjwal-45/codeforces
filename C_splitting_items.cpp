#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi cost(n);
    forr(i,0,n){
        cin >> cost[i];
    }

    sort(all(cost), greater<int>());
    int aliceScore = 0, bobScore = 0;
    forr(i,0,n){
        if(i%2==0){
            aliceScore += cost[i];
        }
        else{
            bobScore += cost[i];
        }
    }

    int minimumScore = aliceScore - bobScore;

    if(minimumScore <= k){
        cout << 0 << endl;
    }
    else{
        cout << minimumScore - k << endl;
    }
}

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
        solve();
    }

    return 0;
}