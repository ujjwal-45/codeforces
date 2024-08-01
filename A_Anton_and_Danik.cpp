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

    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll anton_wins = 0, danik_wins = 0;

    rep(i, n){
        if(s[i] == 'A'){
            anton_wins++;
        }
        else{
            danik_wins++;
        }
    }

    if(anton_wins == danik_wins){
        cout << "Friendship" << endl;
    }
    else if(anton_wins > danik_wins){
        cout << "Anton" << endl;
    }
    else{
        cout << "Danik" << endl;
    }

    return 0;
}