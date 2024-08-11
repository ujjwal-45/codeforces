#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;


int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

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
        int scores[16];
        int originalSkills[16];
        int rankingSkill[16];

        rep(i, 16)
        {
            cin >> scores[i];
            originalSkills[i] = scores[i];
        }

        qsort(scores, 16, sizeof(int), compare);

        rep(i,16){
            rep(j,16){
                if(originalSkills[i] == scores[j]){
                    if (j == 0)
                    {
                        rankingSkill[i] = 4;
                    }
                    else if (j <= 8)
                    {
                        rankingSkill[i] = 3;
                    }
                    else if (j <= 12)
                    {
                        rankingSkill[i] = 2;
                    }
                    else if (j <= 14)
                    {
                        rankingSkill[i] = 1;
                    }
                    else
                    {
                        rankingSkill[i] = 0;
                    }
                    break;
                }
            }
        }

        rep(i,16){
            cout << rankingSkill[i] << " ";
        }
        cout << endl;
    }

    return 0;
}