#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        int arr_ele = 3;

        for (int i = 1; i <= n; i++){
            cout << arr_ele << " ";
            arr_ele += 2;
        }
        
        cout << endl;
    }

    return 0;
}