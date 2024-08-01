#include<bits/stdc++.h>
using namespace std;

#define forn(i, x, n) for (int i = x; i < n; i++)

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        forn(i, 0, n)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int minVal = a[0];
        int count = 0;
        forn(i, 0, n)
        {
            if(a[i] == minVal){
                count++;
            }
            
        }

        if(count == n){
            cout << -1 << endl;
            
        }
        else{
            cout << count << " " << n - count << endl;
            forn(i, 0, count)
                    cout << a[i] << " ";
            cout << endl;

            for (int i = count; i < n; i++){
                cout << a[i] << " ";
            }

            cout << endl;
        }
     
    }

    return 0;
}