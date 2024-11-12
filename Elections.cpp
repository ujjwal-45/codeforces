#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; ++i)
#define forr1(i,x,n) for (int i = x; i <= n; ++i)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

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
        int n, x;
        cin >> n >> x;

        int sum_a = 0, sum_b = 0;
        vi a_votes(n);
        forr(i,0,n){
            cin >> a_votes[i];
        }
        vi b_votes(n);
        forr(i, 0, n)
        {
            cin >> b_votes[i];
        }

        vi req;
        int wins = 0;

        forr(i,0,n){
            if (a_votes[i] > b_votes[i])
            {
                wins += 1;
            }
            else{

            req.push_back(b_votes[i] - a_votes[i] + 1);
            }
        }
        sort(req.begin(), req.end());

        forr(i, 0, req.size())
        {
            if(x >= req[i]){
                wins += 1;
                x -= req[i];
            }
            else{
                break;
            }
        }

        if(wins>n/2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}