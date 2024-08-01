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

    int n;
    cin >> n;

    if(n%2 ==0){
        cout << -1 << endl;
    }

    vi nums(n);
    rep(i,n){
        nums[i] = i;
    }

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    int perm_cnt = 1;
    while(perm_cnt < 3 && next_permutation(all(nums))){
        for (int num : nums)
        {
            cout << num << " ";
        }
        cout << endl;
        perm_cnt++;
    }

    return 0;
}