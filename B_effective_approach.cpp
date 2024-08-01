#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;
int N = int(1e5 + 3);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    cin >> n;
    int pos[N + 1];
    

    rep(i,n){
        int num;
        cin >> num;
        pos[num] = i + 1;
    }
    int sum1 = 0, sum2 = 0;

    int m;
    cin >> m;
    rep(i, m)
    {
        int q;
        cin >> q;
        sum1 += pos[q];
        sum2 += n - pos[q] + 1;
    }


    cout << sum1 << " " << sum2 << endl;

    return 0;
}