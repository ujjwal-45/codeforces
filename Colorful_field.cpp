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

    int n, m, k, t;
    cin >> n >> m >> k >> t;

    set<pair<int,int>> waste;
    rep(i, k){
        int a, b;
        cin >> a >> b;
        waste.insert({a, b});
    }

    vector<pair<int, int>> queries(t);
    rep(i,t){
        cin >> queries[i].first >> queries[i].second;
    }

    for(auto query : queries){
        int i = query.first;
        int j = query.second;

        if(waste.find({i,j}) != waste.end()){
            cout << "Waste" << endl;
        }
        else{
            int wasteCellBefore = 0;
            for(auto w : waste){
                if(w.first < i || (w.first == i && w.second < j)){
                    wasteCellBefore++;
                }
            }

            int cultivatedCellsBefore = (i - 1) * m + (j - 1) - wasteCellBefore;
            int cropType = cultivatedCellsBefore % 3;

            if(cropType == 0){
                cout << "Carrots" << endl;
            }
            else if(cropType == 1){
                cout << "Kiwis" << endl;
            }
            else{
                cout << "Grapes" << endl;
            }
        }
    }

    return 0;
}