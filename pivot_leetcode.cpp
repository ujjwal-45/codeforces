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

class Solution {
public:
    int pivotInteger(int n){
        int total_sum = n * (n + 1) / 2;
        int pr = 0;

        for (int i = 1; i <= n; i++)
        {
            pr = i * i;
            if (pr == total_sum)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    cin >> n;

    Solution s;
    int result = s.pivotInteger(n);
    cout << result << endl;
    return 0;
}
