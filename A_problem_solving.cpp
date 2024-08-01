#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); ++i)
        {
            freq[s[i] - 'A']++;
        }
        int solvedProblems = 0;

        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] >= i + 1)
            {
                solvedProblems++;
            }
        }
        cout << solvedProblems << endl;
    }

    return 0;
}