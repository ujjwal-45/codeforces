#include<bits/stdc++.h>
#include <iostream>
using namespace std;



#define fo(i, x, n) for (int i = x; i < n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long



void solve() {
    int n, c;
    cin >> n;
    cin >> c;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 1, r = 1e9;
    
    while (l <= r)
    {
        int mid = l + ( r - l) / 2;
        int required_area = 0;
        fo(i, 0, n)
        {
            required_area += (arr[i] + 2 * mid) * (arr[i] + 2 * mid);
            if (required_area > c)
            {
                break;
            }
        }

        if (required_area == c)
        {
            cout << mid << endl;
            return;
        }
        if (required_area > c)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int32_t main()
{
    fast;

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}