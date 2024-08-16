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

bool isTrue(int n){
    string str = to_string(n);

    if (str[0] == '1' && str[1] == '0' && str[2] == '1' && str.size() == 3)
    {
        return false;
    }

    if (str[0] == '1' && str[1] == '0' && str[2] == '0' && str.size() == 3)
    {
        return false;
    }

    if (str.size() > 2 && str[0] == '1' && str[1] == '0' && str[2] != '0')
    {
        for (int i = 2; i < str.size(); i++)
        {
            if (str[i] != '0')
            {
                return true;
            }
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
    cin >> t;
    vector<int> a(t);
    forr(i,0,t){
        cin >>a[i];
    }

    forr(i,0,t){
        if (isTrue(a[i])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}