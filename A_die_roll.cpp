#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

void simplify(int num, int den){
    int comm_divisor = gcd(num, den);
    int simplified_num = num / comm_divisor;
    int simplified_den = den / comm_divisor;

    if(simplified_num == 0){
        cout << "0/1";
    }
    else if(simplified_den == 1){
        cout << simplified_num;
    }
    else{
        cout << simplified_num << "/" << simplified_den;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int y, w;
    cin >> y >> w;
    int cnt = 0;

    rep1(i, 6){
        if(i >= y && i >= w){
            cnt++;
        }
    }

    simplify(cnt, 6);

    return 0;
}