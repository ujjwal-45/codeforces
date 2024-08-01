#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

class Solution{
    public :

        int encrpyt(int num){
            int max_digit = 0, len = 0;
            while (num > 0)
            {
                int digit = num % 10;
                num = num / 10;
                max_digit = max(max_digit, digit);
                len++;
            }
            string s = "";
            for (int i = 0; i < len; i++)
            {
                s += to_string(max_digit);
            }
            return stoi(s);
        }

        int sumOfEncryptedInt(vector<int> & nums){
            int n = nums.size();
            vector<int> num1;
            int sum = 0;

            for (int i = 0; i < n;i++){
                sum += encrpyt(nums[i]);
            }

            return sum;
        }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Solution s;
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < values.size();i++){
        cin >> values[i];
    }
        int sum = s.sumOfEncryptedInt(values);
        cout << sum;

        return 0;
}