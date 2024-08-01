

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> v(2);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    if (freq.size() >= 3)
    {
        cout << "NO" << endl;
        return;
    }
    if (freq.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int k = 0;
    for (auto ele : freq)
        v[k++] = ele.second;
    abs(v[0] - v[1]) >= 2 ? cout << "NO" : cout << "YES";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}