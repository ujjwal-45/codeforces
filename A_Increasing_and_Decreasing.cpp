#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int32_t main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> a;

        int diff = 1;

        for (int i = 0; i < n; i++)
        {
            a.push_back(y);
            y -= diff;
            diff += 1;
        }
        if(a[a.size() - 1] < x){
            cout << -1 << endl;
        }
        else{
            cout << x << " ";
            for (int i = a.size() - 2; i >= 0; i--){
                cout << a[i] << " \n"[i == 0];
            }
        }
        }

    return 0;
}