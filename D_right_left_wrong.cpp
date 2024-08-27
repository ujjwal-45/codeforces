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
        forr(i,0,n){
            cin >> a[i];
        }
        string s;
        cin >> s;

        int l = 0, r = n - 1;
        ll sum = 0;

        while(r>l){
            while(l < n and s[l] == 'R'){
                l += 1;
            }
            while(r >= 0 and s[r] == 'L'){
                r -= 1;
            }
            if(l<r){
                forr1(i,l,r){
                    sum += a[i];
                }
                l += 1;
                r -= 1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}