#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

struct Container
{
    int matchesPerBox;
    int matchboxes;

    bool operator<(const Container &other) const
    {
        return matchesPerBox > other.matchesPerBox;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n, m;
    cin >> n >> m;

    vector<Container> containers(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> containers[i].matchboxes >> containers[i].matchesPerBox;
    }

    sort(containers.begin(), containers.end());

    long long totalMatches = 0;

    for (int i = 0; i < m && n > 0; ++i)
    {
        int boxesToTake = min(n, containers[i].matchboxes);
        totalMatches += static_cast<long long>(boxesToTake) * containers[i].matchesPerBox;
        n -= boxesToTake;
    }

    cout << totalMatches << endl;

    return 0;
}

// int main()
// {


//     ll n, m;
//     cin >> n >> m;
//     vector<vector<int>> pairs(n, vector<int>(2));
//     rep(i, n){
//         cin >> pairs[i][0] >> pairs[i][1];
//     }
//     sort(pairs.begin(), pairs.end(), [](const vector<int> &a, vector<int> &b)
//          { return a[1] > b[1]; });

//     ll maxmatches = 0L;
//     rep(i, n){
//         if(n - pairs[i][1] >= 0){
//             maxmatches += (pairs[i][0] * pairs[i][1]);
//             n -= pairs[i][0];
//         }
//         else{
//             maxmatches += (n * pairs[i][1]);
//             break;
//         }
//     }
//     cout << maxmatches << endl;

//     return 0;
// }