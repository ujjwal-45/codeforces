#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

void solve(){
    int a, b, x;
    cin >> a >> b >> x;

    int red_area = a * b;
    int blue_area = x * x;

    int diff = blue_area - red_area;
    diff = -1 * diff;
    if (blue_area >= red_area)
    {
        cout << 0 << endl;
    }
    else if(diff > 0 && diff < blue_area){
        cout << 1 << endl;
    }
    else if (diff >= blue_area){
        cout << 2 << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}