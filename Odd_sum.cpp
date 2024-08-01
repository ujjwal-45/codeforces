// all possible arrays ,prefix sum is odd
// output -> smallest possible sum of an array
// array elements should be distinct
// [1,0,2,4,6,8,10,12] -> prefixSum = [1,1,3,7,13,21,31,43]
// sum is 1 + (n-1)(n-2) , n = 3, 1 + 2*1 = 3

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

#include <bits/stdc++.h>
using namespace std;
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define vi vector<int>
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define pb push_back

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fio
    w(t)
    {
        int n;
        cin >> n;
        cout << (n - 1) * (n - 2) + 1 << "\n";
    }
}