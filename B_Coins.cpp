#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int pos[3];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    string s;
    for (int i = 0; i < 3; ++i)
    {
        cin >> s;
        if (s[1] == '>')
            pos[s[0] - 'A']++;
        else
            pos[s[2] - 'A']++;
    }
    if (pos[0] == pos[1] || pos[1] == pos[2] || pos[0] == pos[2])
    {
        cout << "Impossible\n";
        return 0;
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (pos[j] == i)
                cout << (char)(j + 'A');
        }
    }
    return 0;
}