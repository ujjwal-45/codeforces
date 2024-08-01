#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        string required_order = "abc";
        int cnt = 0;

        for (int i = 0; i < s.size();i++){
            if(s[i] != required_order[i])
                cnt++;
        }
        if(cnt <= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}