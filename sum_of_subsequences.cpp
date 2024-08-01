#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

class Solution
{
public:
    int sumOfPower(vector<int> &nums, int k)
    {
        const int mod = 1e9 + 7;
        int n = nums.size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n + 1, vector<int>(k + 1)));
        dp[0][0][0] = 1;

        for (int i = 1; i <= n;i++){
            int prev = nums[i - 1];

            for (int clen = 0; clen <= n; clen++) // child length , child sum
            {
                for (int cSum = 0; cSum <= k; cSum++)
                {
                    // ignore prev
                    dp[i][clen][cSum] += dp[i - 1][clen][cSum];
                    if(cSum >= prev && clen > 0){
                        dp[i][clen][cSum] += dp[i - 1][clen-1][cSum-prev];
                    }
                    dp[i][clen][cSum] %= mod;
                }
            }
        }

        vector<int> power2(n + 1);
        power2[0] = 1;
        for (int i = 1; i <= n;i++){
            power2[i] = (2 * power2[i - 1]) % mod;
        }

        long long int ans = 0;

        for (int clen = 0; clen <= n;clen++){
            int parent_cnt = power2[n - clen];
            ans += parent_cnt * 1LL * dp[n][clen][k];
            ans %= mod;
        }
        return ans;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    Solution s;
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n;i++){
        cin >> nums[i];
    }

        int ans = s.sumOfPower(nums, k);
    cout << ans << endl;

    return 0;
}