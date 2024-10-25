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

        vi a(n+1);
        forr(i,0,n){
            cin >>a[i];
        }

        int lastElement = a[n];

        for (int i = 0;i<n;i++)
        {
            if(a[i] <= (2 * a[n-1])){
                swap(a[i], lastElement);
                break;
            }  
        }
        int sum = 0;

        forr(i,0,n+1){
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}