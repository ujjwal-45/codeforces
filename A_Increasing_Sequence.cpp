#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }

        int b = 1;

        for (int i = 0; i < n; i++)
        {
            if(b == a[i]){
                b = a[i] + 1;
            }
            if(i == n-1)
                break;
            b += 1;
        }
        cout << b << endl;
    }
    return 0;
}