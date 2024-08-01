#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

void mergeQverlappingIntervals( vector<pair<int, int>> &v){
    sort(v.begin(), v.end());
    vector<pair<int, int>> ans;
    int start = v[0].first;
    int end = v[0].second;

    for (int i = 0; i < v.size(); i++){
        if(v[i].first <= end){
            end = max(end, v[i].second);
        }
        else{
            ans.push_back({start, end});
            start = v[i].first;
            end = v[i].second;
        }
    }
    ans.push_back({start, end});
    v = ans;
}

int result(int x, vector<pair<int, int>> &v){
    int n = v.size();
    int l = 0;
    int r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid].first <= x && v[mid].second >= x){
            return v[mid].second;
        }
        else if (v[mid].first > x){
            r = mid - 1;
        }
        else{
            l = mid + 1;
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
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int l, r, a, b;
            cin >> l >> r >> a >> b;
            v[i] = {l, b};
        }
        mergeQverlappingIntervals(v);

        int q;
        cin >> q;
        while(q--){
            int x;
            cin >> x;
            cout << result(x, v) << " ";
            
        }
        cout << endl;
        }

    return 0;
}