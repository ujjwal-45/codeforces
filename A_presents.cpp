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
    vector<int> friends(n);
    rep(i, n){
        cin >> friends[i];
    }

    unordered_map<int, int> indexMap; // element, index
    rep(i, n){
        indexMap[friends[i]] = i + 1;
    }

    vector<pair<int, int>> entries;
    for (const auto &entry : indexMap)
    {
        entries.push_back(entry);
    }
    sort(entries.begin(), entries.end());

    for(auto& entry : entries){
        cout << entry.second << " ";
    }

    return 0;
}