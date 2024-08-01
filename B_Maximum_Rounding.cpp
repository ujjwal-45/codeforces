#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--){
        string num;
        cin >> num;
        ll len = num.length();
        num = '0' + num;

        reverse(num.begin(), num.end());

        ll k = 0;
        for (ll i = 0; i < len; ++i){
            if(num[i] >= '5'){
                num[i + 1]++;
                for (ll j = i; j >= k; j--){
                    num[j] = '0';
                }
                k = i;
            }
        }
        reverse(num.begin(), num.end());
        
        if(num[0] == '0'){
            for (ll i = 1; i <= len; ++i)
            {
                cout << num[i];
            }
            cout << endl;
    }
    else{
            for (ll i = 0; i <= len; ++i)
            {
                cout << num[i];
            }
            cout << endl;
    }
    }

    return 0;
}