#include<bits/stdc++.h>
#include<iostream>
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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    
        int n;
        cin >> n;
        string a;
        cin >> a;

        vector<string> trans = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};

        string ans = "";
        for(char ch : a){
            ans += trans[ch - '0'];
        }
        sort(ans.begin(), ans.end(), greater<int>());

        cout << ans << endl;

    return 0;
}