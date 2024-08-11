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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        vector<pair<int, int>> suneet_flips = {{a1, a2}, {a2, a1}};
        vector<pair<int, int>> slavic_flips = {{b1, b2}, {b2, b1}};

        int suneet = 0;

        for(auto su : suneet_flips){
            for(auto sl : slavic_flips){
                int suneet_roundWin = 0;
                int slavic_roundWin = 0;

                if(su.first > sl.first){
                    suneet_roundWin++;
                }
                else if(sl.first > su.first){
                    slavic_roundWin++;
                }

                if (su.second > sl.second)
                {
                    suneet_roundWin++;
                }
                else if (sl.second > su.second)
                {
                    slavic_roundWin++;
                }

                if(suneet_roundWin > slavic_roundWin){
                    suneet++;
                }
            }
        }

        cout << suneet << endl;
    }

    return 0;
}