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
            cin >>a[i];
        }
        int lastElement;
        cin >> lastElement;

        sort(a.begin(), a.end());
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]>lastElement && a[i] <= (2 * lastElement)){ // swap everytime with the last element till possible
                swap(a[i], lastElement);
            }
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}