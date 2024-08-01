#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
using namespace std;
int ar[1001];
int br[1001];

void shift(int j)
{
    int i = 1;
    int k = j;

    while (i < j)
        swap(ar[i], ar[j]), i++, j--;

    REP(i, k)
    ar[i] ^= 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n;
    char ch;
    cin >> t;
    while (t--)
    {
        cin >> n;
        REP(i, n)
            cin >> ch,
            ar[i] = ch - '0';
        REP(i, n)
            cin >> ch,
            br[i] = ch - '0';

        vi v;
        for (int i = n; i > 1; i--)
            if (ar[i] != br[i])
            {
                if (ar[i] != ar[1])
                    v.pb(1), ar[1] = ar[i];

                v.pb(i), shift(i);
            }

        if (ar[1] != br[1])
            v.pb(1);

        cout << v.size() << " ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}