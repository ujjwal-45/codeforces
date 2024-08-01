#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--){

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int cnt = 0;

        for(int a : arr){
            if(a == k)
                cnt++;
        }
        cout << (cnt >= 1 ? "YES\n" : "NO\n");
    }

    return 0;
}