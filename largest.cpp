#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; ++i)
#define forr1(i,x,n) for (int i = x; i <= n; ++i)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

int solve(int n){
    int largest = -1;

    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
    {
        largest = n;
    }

    return largest;
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
        int l, r, p;
        cin >> l >> r >> p;

        int count = 0;

        for (int i = l; i <= r; i++)
        {
            int largest = solve(i);
            if (largest <= p)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}