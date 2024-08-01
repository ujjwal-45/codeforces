#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using lli = long long int;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    unordered_map<int, int> x_count, y_count;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
        x_count[x]++;
        y_count[y]++;
    }

    int cnt = 0;

    // Count the pairs for the same x coordinates
    for (auto &p : x_count)
    {
        int c = p.second;
        cnt += (c * (c - 1)) / 2;
    }

    // Count the pairs for the same y coordinates
    for (auto &p : y_count)
    {
        int c = p.second;
        cnt += (c * (c - 1)) / 2;
    }

    cout << cnt << endl;

    return 0;
}
