#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const ll mod = 1000000007;

const int N = 1e5 + 10;

vector<int> indicesMapping(vector<int> &a)
{
    unordered_map<int, int> indexMap;
    int nextIndex = 1;
    vector<int> ids(a.size());
    for (int i = 0; i < a.size(); ++i)
    {
        if (indexMap.find(a[i]) == indexMap.end())
        {
            indexMap[a[i]] = nextIndex++;
        }
        ids[i] = indexMap[a[i]];
    }
    return ids;
}

vector<int> stringMapping(string &s)
{
    unordered_map<char, int> id_map;
    int nextIndex = 1;
    vector<int> ids(s.size());
    for (int i = 0; i < s.size(); ++i)
    {
        if (id_map.find(s[i]) == id_map.end())
        {
            id_map[s[i]] = nextIndex++;
        }
        ids[i] = id_map[s[i]];
    }
    return ids;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> a_new = indicesMapping(a);

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            vector<int> s_new = stringMapping(s);

            if (a_new == s_new)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
    }
    return 0;
}