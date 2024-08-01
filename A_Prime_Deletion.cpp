#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;


bool isPrime(int n){

    for (int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int32_t main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int ans = 2;

        for (int i = 0; i < 9; i++){
            for (int j = i + 1; j < 9; j++){
                int x = (s[i] - '0') * 10 + (s[j] - '0');
                if(isPrime(x)){
                    ans = x;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}