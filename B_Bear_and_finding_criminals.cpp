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

    int n, a;
    cin >> n >> a;
    int sum = 0;
    vector<int> criminals(n + 1);
    rep1(i, n){
        cin >> criminals[i];
        sum += criminals[i];
    }

    for (int dist = 1; dist < a && dist <= n - a;dist++){
       if(criminals[dist + a] + criminals[a - dist] == 1){
           sum--;
       }
    }


        cout << sum << endl;
    return 0;
}