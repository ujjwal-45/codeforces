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

struct Factors{
    int a2 = 0, a3 = 0, a5 = 0, remaining = 1;
};

Factors factorize(int n){
    Factors factors;

    while(n%2==0){
        factors.a2++;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        factors.a3++;
        n /= 3;
    }
    while (n % 5 == 0)
    {
        factors.a5++;
        n /= 5;
    }

    factors.remaining = n;
    
    return factors;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int a, b;
    cin >> a >> b;

    Factors factors_a = factorize(a);
    Factors factors_b = factorize(b);

    int diff1 = abs(factors_a.a2 - factors_b.a2);
    int diff2 = abs(factors_a.a3 - factors_b.a3);
    int diff3 = abs(factors_a.a5 - factors_b.a5);

    bool same_remaining = (factors_a.remaining == factors_b.remaining);

    if(same_remaining){
        cout << diff1 + diff2 + diff3 << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}