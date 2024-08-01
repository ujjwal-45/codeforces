#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int min_divisor(int n){
    if(n % 2 == 0){
        return 2;
    }
    for (int i = 3; i * i <= n;i++){ 
        if(n % i == 0){
            return i;
        }
    }
    return n;

   
}

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        ll l, r;
        cin >> l >> r;

        if(r <= 3){
            cout << -1 << endl;
        }
        else{
            if(l < r){
                if(r%2 != 0){
                    r--;
                }
                cout << 2 << " " << r - 2 << endl;
            }
            else{
                ll md = min_divisor(l);
                if(md == l){
                    cout << -1 << endl;
                }
                else{
                    cout << md << " " << l - md << endl;
                }
            }
        }
    }
        
    return 0;
}