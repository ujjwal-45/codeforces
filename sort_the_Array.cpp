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

bool isSorted(vector<int>& a){
    for (size_t i = 1; i < a.size();i++){
        if(a[i] < a[i-1]) return false;

    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    cin >> n;
    vi a(n);
    rep(i,n){
        cin >> a[i];
    }

    int l = 0;
    while(l < n -1 && a[l] < a[l+1]){
        l++;
    }

    if(l==n-1){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    int r = n - 1;
    while(r > 0 && a[r] > a[r-1]){
        --r;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if(isSorted(a)){
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl;
    }
    else{
        cout << "no" << endl;
    }

    return 0;
}