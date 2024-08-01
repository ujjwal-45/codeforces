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

int origin_of_number(int x){
    while(x >= 10){
        int sum = 0;

        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        x = sum;
    }
    return x;
}
long long int solve(int N)
{
    vector<long long int > dp(10, 0);
    for (int i = 1; i <= 9; ++i)
    {
        dp[i] = dp[i - 1] + origin_of_number(i);
    }

    long long int ans = 0;
    long long int cycle = N / 9;
    long long int remainder = N % 9;

    ans = cycle * dp[9];

    if (remainder > 0)
    {
        ans += dp[remainder];
    }

    return ans;
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
        ll n;
        cin >> n;
        ll sum = 0;

        cout << solve(n) << "\n";
    }

    return 0;
}