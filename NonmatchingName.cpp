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

bool solve(string s, string t){
    unordered_set<char> set1(s.begin(),s.end());
    unordered_set<char> set2(t.begin(),t.end());

    unordered_set<char> missingChars;
    for(char ch : set2){
        if(set1.find(ch) == set1.end()){
            missingChars.insert(ch);
        }
    }

    for(char ch : missingChars){
        if(set1.find(ch) != set1.end()){
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
        int n,m;
        cin>>n>>m;

        string s;
        string t;
        cin >> s;
        cin >> t;

        if(solve(s,t)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}