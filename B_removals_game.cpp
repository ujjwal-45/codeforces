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

bool check(vi &a, vi& b){
    forr(i,0,a.size()){
        if(a[i] != b[i]){
            return false;
        }
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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        forr(i,0,n){
            cin >> a[i];
        }
        forr(i, 0, n)
        {
            cin >> b[i];
        }
        vi temp = b;
        reverse(all(b));

        if (check(a, temp) || check(a, b))
        {
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }

    return 0;
}