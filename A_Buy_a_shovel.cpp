#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int k, r;
    cin >> k >> r;

    int shovels = 1;
    while((k * shovels - r) % 10 != 0 && (k * shovels) % 10 != 0){
        shovels++;
    }

    cout << shovels << endl;

    return 0;
}