#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

class Solution
{
public:
    const int marker = -1;
    vector<long long> unmarkedSumArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        vector<long long> result;

        set<int> markedInd;

        for (const auto& q : queries){
            int index = q[0];
            int k = q[1];
            
            if(nums[index] != marker){
                nums[index] = marker;
                markedInd.insert(index);
            }

            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

            for (int i = 0; i < n;i++){
                if(nums[i] != marker && markedInd.find(i) == markedInd.end()){
                    pq.push({nums[i], i});
                }
            }

            while(k > 0 && !pq.empty()){
                auto [val, ind] = pq.top();
                pq.pop();
                nums[ind] = marker;
                markedInd.insert(ind);
                k--;
            }

            long long sum = 0;
            for(int val : nums){
                if(val != marker){
                    sum += val;
                }
            }
            result.push_back(sum);
        }

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

    vector<int> nums = {1, 2, 2, 1, 2, 3, 1};
    vector<vector<int>> queries = {{1, 2}, {3, 3}, {4, 2}};

    vector<long long> result = s.unmarkedSumArray(nums, queries);

    for (long long sum : result)
    {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}