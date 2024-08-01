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

    ll n;
    cin >> n;
    vector<int> city(n);

    rep(i, n){
        cin >> city[i];
    }

    vector<int> res1;
    vector<int> res2;

    int minimum = city[0], maximum = city[n-1];

    rep(i, n){
        maximum = max(abs(city[i] - city[0]), abs(city[i] - city[n - 1]));
        if(i == 0){
            minimum = abs(city[i] - city[i + 1]);
        }
        else if(i == n -1){
            minimum = abs(city[i] - city[i - 1]);
        }
        else{
            minimum = min(abs(city[i] - city[i - 1]), abs(city[i] - city[i + 1]));
        }
        res1.push_back(minimum);
        
        res2.push_back(maximum);
    }
    rep(i, n){
        cout << res1[i] << " " << res2[i] << endl;
    }

    return 0;
}