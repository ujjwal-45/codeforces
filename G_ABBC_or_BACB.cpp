#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        int no_of_coins = 0;
        vector<int> v;
        int cntA = 0, cntB = 0; 
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'A'){
                cntA++;
                
                if(cntB != 0){
                    v.push_back(-cntB);
                }
                cntB = 0;
            }else{
                v.push_back(cntA);
                cntB++;
                cntA = 0;
            }
        }

        if(cntB != 0){
            v.push_back(-cntB);
        }
        else if(cntA != 0){
            v.push_back(cntA);
        }

        int m = v.size();

        if(v[0] < 0){
            v[0] = -1;
        }
        if(v[m-1] < 0){
            v[m - 1] = -1;
        }

        bool flag = false;
        int min_e = INT_MAX;
        for (int i = 0; i < m;i++){
            if(v[i] > 0){
                min_e = min(min_e, v[i]);
                no_of_coins += v[i];
            }
            if(v[i] <= -2){
                flag = true;
            }
        }

        if(flag){
            cout << no_of_coins << endl;
            continue;
        }
        int temp = min(v[0], v[m - 1]);
        min_e = min(min_e, temp);

        if(min_e >= 0){
            no_of_coins -= min_e;
        }
        cout << no_of_coins << endl;
    }

    return 0;
}