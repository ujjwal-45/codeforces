#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
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
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        int sum = 0, result = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i].first;
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i].second;
            arr[i].first -= arr[i].second;
            sum += arr[i].second;
        }

        sort(arr.begin(), arr.end());
        result = sum;
        sum += arr[0].first;

        for (int i = 1; i < n; i++)
        {
            sum += arr[i].first;
            result = min(result, sum);
        }

        cout << result << endl;
    }

    return 0;
}