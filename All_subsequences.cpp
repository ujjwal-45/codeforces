#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;
const int mod = 1e9 + 7;

class Solution
{
public:
    int sumOfPower(vector<int> &nums, int k)
    {
        unordered_map<int, int> memo;
        return dfs(nums, 0, 0, k, memo);
    }

    int dfs(vector<int>& nums, int i,int sum, int k, unordered_map<int, int>& memo){
        if(sum == k){
            return static_cast<int>(pow(2, nums.size() - i)) % mod;
        }

        if(sum > k || i >= nums.size()){
            return 0;
        }

        int key = i * 1000 + sum;
        if(memo.find(key) == memo.end()){
            return memo[key];
        }

        int result = (2 * dfs(nums, i + 1, sum, k, memo) + dfs(nums, i + 1, sum + nums[i], k, memo)) % mod;

        memo[key] = result;
        return result;
    }
};

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    fast;

    Solution s;

    vector<int> nums = {1, 2, 3};
    int k = 3;
    int result = s.sumOfPower(nums, k);
    cout << result <<endl;

    return 0;
}