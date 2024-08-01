#include<bits/stdc++.h>
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

    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int ops = 5;

        if(a > b) swap(a,b);
        if(b > c) swap(b,c);
        if (a > b)
            swap(a, b);

        while(ops > 0){
            if(a <= b && b <= c){
                a++;
            }
            else if(b <= a && b <= c){
                b++;
            }
            else{
                c++;
            }
            ops--;

            if (a > b)
                swap(a, b);
            if (b > c)
                swap(b, c);
            if (a > b)
                swap(a, b);
        }

        int product = a * b * c;
        cout << product << endl;
    }

    return 0;
}