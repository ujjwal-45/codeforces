#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        map<int, int> freq;
        long long sum = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
            sum += arr[i];
            freq[arr[i]]++;
        }

        bool existgoodArray = false;

        for (int i = 0; i < n; ++i){
            long long targetSum = 2 * sum - arr[i];

            if(targetSum % 2 == 0){
                targetSum /= n;

                if(freq.count(targetSum) && (targetSum != arr[i]) || freq[targetSum] == 1){
                    existgoodArray = true;
                    break;
                }
            }
        }

        cout << (existgoodArray ? "YES" : "NO") << endl;
    }

    return 0;
}