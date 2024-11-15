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

bool solve(string s, string t,int n,int m){
    vector<bool> v(26, 0);

    forr(i,0,n){
        v[s[i] - 'a'] = 1;
    }

    forr(i, 0, m)
    {
        v[t[i] - 'a'] = 1;
    }

    forr(i, 0, 26)
    {
        if(v[i] ==0){
            return true;
            break;
        }
    }

    return false;
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
        int n,m;
        cin>>n>>m;

        string s;
        string t;
        cin >> s;
        cin >> t;

        if(solve(s,t,n,m)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}