#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define for(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
        string s;
        cin >> s;

        int max_freq = 0;

        map<char, int> freq;

        for(i,n){
            freq[s[i]]++;
            max_freq = max(max_freq, freq[s[i]]);

        }
        cout << max((n % 2), 2 * max_freq - n) << endl;
    }

    return 0;
}