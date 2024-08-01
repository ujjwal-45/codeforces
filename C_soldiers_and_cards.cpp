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

    int n;
    cin >> n;

    int k1, k2;
    cin >> k1;
    deque<int> soldier1_card(k1);
    rep(i,k1){
        cin >> soldier1_card[i];
    }
    cin >> k2;
    deque<int> soldier2_card(k2);
    rep(i, k2)
    {
        cin >> soldier2_card[i];
    }

    set<pair<deque<int>, deque<int>>> seen;

    int fights = 0;
    while (!soldier1_card.empty() && !soldier2_card.empty())
    {
        if(seen.count({soldier1_card, soldier2_card})){
            cout << -1 << endl;
            return 0;
        }
        seen.insert({soldier1_card, soldier2_card});

        int c1 = soldier1_card.front();
        int c2 = soldier2_card.front();
        soldier1_card.pop_front();
        soldier2_card.pop_front();

        if(c1 > c2){
            
            soldier1_card.push_back(c2);
            soldier1_card.push_back(c1);
        }
        else{
            soldier2_card.push_back(c1);
            soldier2_card.push_back(c2);
        }
        fights++;
    }
    if(soldier1_card.empty()){
        cout << fights << " " << 2 << endl;
    }
    else{
        cout << fights << " " << 1 << endl;
    }

    return 0;
}