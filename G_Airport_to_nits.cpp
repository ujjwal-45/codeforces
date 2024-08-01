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

bool solve(int maxTime, vector<int>& time, int buses, int cap){
    int curr_time = 0;
    int curr_cap = 0;

    for (int i = 0; i < time.size();i++){
        if(time[i] > curr_time + maxTime){
            curr_cap = 0;
            curr_time = time[i];
            --buses;

            if (buses == 0)
            {
                return false;
            }
        }
        if(curr_cap == cap){
            curr_cap = 0;
            --buses;
        }
        curr_cap++;
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n, k, s;
    cin >> n >> k >> s;
    vector<int> st(n);
    rep(i, n){
        cin >> st[i];
    }

    sort(st.begin(), st.end());

    int low = 0, high = 1e9, result = 0;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(solve(mid, st, k, s)){
            result = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << result << endl;

    return 0;
}