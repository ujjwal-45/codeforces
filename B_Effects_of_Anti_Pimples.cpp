#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll modd = 998244353;

int xpowermod(int x, int y, int mod){
    int ans = 1;
    if(x == 0){
        return 0;
    }
    while(y){
        if(y & 1){
            (ans *= x) %= mod;
        }
        y >>= 1;
        (x *= x) %= mod;
    }
    return ans;
}

int pow_func(int val, int x){
    int pw = xpowermod(2, x, modd);
    int result = (val * pw) % modd;
    return result;
}

int main()
{
    fast;

   
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> maxi(n, 0);
        for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
        }
        unordered_map<int, bool> color;
        for (int i = 0; i < n; i++){
        for (int k = i; k < n; k += (i + 1))
        {
            maxi[i] = max(maxi[i], arr[k]);
        }
        cout << endl;
        }
        int sum = 0;
        sort(maxi.begin(), maxi.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
        sum = (sum + pow_func(maxi[i], n - 1 - i)) % modd;
        }
        cout << sum << endl;

        return 0;
        }