#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define fo(i, x, n) for (int i = x; i < n; i++)
#define forn(i, x, n) for (int i = x; i <= n; i++)
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int32_t main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        int res = 0, sum, mmax, flag;
        set<int> st;

        vector<int> possible;
        vector<int> done(n * n + 1);
    
        forn(i, 1, n)
        {
            forn(j, 1, n){
                if(done[i*j])
                    continue;
                done[i * j] = 1;
                possible.push_back(i * j);
            }
        }
        int i, avail, tmp;

        sort(possible.rbegin(), possible.rend());

        for(auto x: possible){
            if(x*n < res)
                break;

            sum = mmax = 0;
            flag = 1;

            forn(avail, 1, n){
                st.insert(avail);
            }

            for (i = n; i >= 1; i--)
            {
                if(st.lower_bound((x/i)+1) == st.begin()){
                    flag = 0;
                    break;
                }
                tmp = *(--st.lower_bound((x / i) + 1));
                st.erase(tmp);

                mmax = max(mmax, tmp * i);
                sum += tmp * i;
            }
            if(!flag)
                continue;

            res = max(res, sum - mmax);
        }

        cout << res << endl;
    }

    return 0;
}