#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    string s, t;
    cin >> s >> t;

    int curr_pos = 1;

    for(char i : t){
        char stone_color = s[curr_pos - 1];

        if ((i == 'R' && stone_color == 'R') ||
            (i == 'B' && stone_color == 'B') ||
            (i == 'G' && stone_color == 'G')){
            curr_pos++;
        }
    }

    cout << curr_pos << endl;

    return 0;
}