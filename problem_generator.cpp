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
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        int required_cnt[7] = {m, m, m, m, m, m, m};

        int current_cnt[7] = {0};
        for(auto ch : a){
            if(ch >= 'A' && ch <= 'G'){
                current_cnt[ch - 'A']++;
            }
        }
        int count_prob = 0;

        for (int i = 0; i < 7;i++){
            if(current_cnt[i] < required_cnt[i]){
                count_prob += required_cnt[i] - current_cnt[i];
            }
        }

        cout << count_prob << "\n";
    }

    return 0;
}