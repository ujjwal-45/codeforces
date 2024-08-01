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
using lli = long long int;

const ll mod = 1000000007;
int n, m, x;
vector<pair<int, int>> posKey[26], shift;
bool canType[26];
char text[1000000];

int distance(int i, int j, int shift_row, int shift_col)
{
    return (i - shift_row) * (i - shift_row) + (j - shift_col) * (j - shift_col);
}

bool check(int i, int j)
{
    for (int c = 0; c < shift.size(); c++)
    {
        int dist = distance(i, j, shift[c].first, shift[c].second);
        if (dist <= x * x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    cin >> n >> m >> x;

    char keys[31][31];
    rep(i, n)
    {
        cin >> keys[i];
    }

    rep(i, n)
    {
        rep(j, m)
        {
            if (keys[i][j] == 'S')
            {
                shift.push_back({i, j});
            }
            else
            {
                posKey[keys[i][j] - 'a'].push_back({i, j});
            }
        }
    }

    rep(i, 26)
    {
        for (int j = 0; j < posKey[i].size() && !canType[i]; j++)
        {
            canType[i] = check(posKey[i][j].first, posKey[i][j].second);
        }
    }

    int q;
    cin >> q;
    cin >> text;

    int result = 0;
    rep(i, q)
    {
        if (islower(text[i]))
        {
            if (posKey[text[i] - 'a'].empty())
            {
                result = -1;
                break;
            }
        }
        else
        {
            text[i] = tolower(text[i]);
            if (shift.empty() || posKey[text[i] - 'a'].empty())
            {
                result = -1;
                break;
            }
            if (!canType[text[i] - 'a'])
            {
                result++;
            }
        }
    }
    cout << result << endl;

    return 0;
}
