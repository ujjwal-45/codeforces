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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int win = 0;
        char lastmove = ' ';
        
        rep(i, n){
            char rokumove = s[i];
            char chefmove;

            if(rokumove == 'R'){
                chefmove = 'P';
            }
            else if(rokumove == 'P'){
                chefmove = 'S';
            }
            else if(rokumove == 'S'){
                chefmove = 'R';
            }

            if(chefmove != lastmove){
                win++;
                lastmove = chefmove;
            }
            // else{
            //     chefmove = (chefmove + 1 - 'A') % 3 + 'A';
            //     win++;
            //     lastmove = chefmove;
            // }
        }
        cout << win << "\n";
    }

    return 0;
}