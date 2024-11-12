#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; ++i)
#define forr1(i,x,n) for (int i = x; i <= n; ++i)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

bool isPerfectMelody(const vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff != 7 && diff != 5)
        {
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
        vector<int> a(n);
        forr(i,0,n){
            cin >> a[i];
        }
        
        if(isPerfectMelody(a)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}