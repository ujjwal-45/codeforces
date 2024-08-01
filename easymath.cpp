#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

long long countDivisible(long long n, long long m, long long divisor)
{
    return (m / divisor) - ((n - 1) / divisor);
}

long long countNumbers(long long n, long long m, long long a, long long d)
{
    long long count = m - n + 1;

    for (int i = 0; i < 5; ++i)
    {
        count -= countDivisible(n, m, a + i * d);
    }

    return count;
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
        ll n, m, a, d;
        cin >> n >> m >> a >> d;

        ll count = countNumbers(n, m, a, d);

        cout << count << endl;
    }

    return 0;
}