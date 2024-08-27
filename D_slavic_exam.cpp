#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

bool canBeSubsequence(string s,string t){
    int j = 0;
    for (int i = 0; i < s.size() && j < t.size();i++){
        if(s[i] == t[j]){
            j++;
        }
    }
    return j == t.size();
}

void solve(string& s,string& t){
    int j = 0;
    rep(i,s.size()){
        if(s[i] == '?'){
            if(j < t.size()){
                s[i] = t[j];
                j++;
            }
            else{
                s[i] = 'a';
            }
        }
        else if(s[i] == t[j]){
            j++;
        }
    }
    if(j >= t.size()){
        cout << "YES\n" << s<<"\n";
    }else{
        cout << "NO\n";
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
        string s;
        cin >> s;
        string t;
        cin >> t;

        solve(s,t);
    }

    return 0;
}