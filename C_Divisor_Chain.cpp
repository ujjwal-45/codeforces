#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int32_t smallestDivisor(int x){
    for (int i = 2; i < (sqrt(x)) + 1; i++){
       if(x % i == 0){
           return i;
       }
    }
    return x;
}

int32_t main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        int x;
        cin >> x;

        int k = 1;
        vector<int> a;

        int divisor = smallestDivisor(x);
        while(x != 1){
           
           a.push_back(x);
           
        }
        x -= divisor;
        a.push_back(1);

        cout << k << endl;
        for (int i = 0; i < a.size(); i++){
            cout << a[i] << " \n";
        }
    }

    return 0;
}