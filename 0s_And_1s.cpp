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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int a[10] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int n = (sizeof(a) / sizeof(a[0]));

    int l = 0,r = n-1;

    while(l<r){
        if(a[l]==1 && a[r]==0){
            swap(a[l], a[r]);
        }
        if(a[l]==0){
            l++;
        }
        if(a[r]==1){
            r--;
        }
    }

    for (int i = 0; i <n;++i){
        cout << a[i] << " " << endl;
    }

    return 0;
}