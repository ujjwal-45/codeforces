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

bool solve(int n, vi& a){
    set<int> occupiedSeats;

    occupiedSeats.insert(a[0]);

    forr(i,1,n){
        int seat = a[i];

        if(occupiedSeats.count(seat - 1) == 0 && occupiedSeats.count(seat + 1) == 0){
            return false;
        }

        occupiedSeats.insert(seat);
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
        forr(i,0,n){
            cin >> a[i];
        }


        if (solve(n, a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}