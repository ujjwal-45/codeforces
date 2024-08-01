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

    string s;
    cin >> s;
    int sum = 10, ans = 0;
    if (s.size() == 1)
        cout << "0\n";
    else
    {
        while (sum >= 10)
        {
            sum = 0;
            for (int i = 0; i < s.size(); ++i)
                sum += s[i] - '0';
            s = to_string(sum);
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}