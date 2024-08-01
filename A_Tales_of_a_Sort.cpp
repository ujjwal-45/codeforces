#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; ++i){
            cin >> nums[i];
        }
        int no_of_operations = 0;

        if(is_sorted(nums, nums + n)){
            cout << "0" <<endl;
            continue;
        }
        int index = -1;

        for (int i = n - 1; i >= 0; --i){
               if(nums[i] >= nums[i-1] ){
                   continue;
               }
               else{
                   index = i;
                   break;
               }
        }
        no_of_operations = *max_element(nums, nums + index);

        cout << no_of_operations << endl;
    }

    return 0;
}