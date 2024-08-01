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

    int n;
    cin >> n;

    string x;
    cin >> x;

    string out;
    out += x[0];

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            out += x[i];
        else
            out.insert(0, 1, x[i]);
    }

    if (n % 2 == 0)
        reverse(out.begin(), out.end());

    cout << out << endl;

    return 0;
}