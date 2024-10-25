#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i, x, n) for (int i = x; i < n; i++)
#define forr1(i, x, n) for (int i = x; i <= n; i++)
#define all(a) a.begin(), a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;



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
        int n, m;
        cin >> n >> m;

        vi a(n);
        
        forr(i, 0, n)
        {
            cin >> a[i];
        }
        int maxi = *max_element(a.begin(), a.end());


        forr(i, 0, m)
        {
            char c;
            int l, r;
            cin >> c >> l >> r;

            if(l <= maxi <= r){
                if(c == '+'){
                    maxi += 1;
                }
                else{
                    maxi -= 1;
                }
            }

            cout << maxi;
            if (i != m - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}