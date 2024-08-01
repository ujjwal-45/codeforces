#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int n;
    cin >> n;
    vector<int> height(n);
    rep(i,n){
        cin >> height[i];
    }

    int maxh = 0, cnt = 0;
    rep(i, n){
        cnt = 0;
        if(i == 0){ // consider only right side, i.e, element is lesser or equal
            for (int j = i + 1; j < n;j++){
                if(height[j] <= height[j-1]){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(maxh < cnt + 1){
                maxh = cnt + 1;
            }
            cnt = 0;
        }
        else if(i == n-1){ // consider only left side
            for (int j = i - 1; j >= 0;j--){
                if(height[j] <= height[j+1]){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(maxh < cnt + 1){
                maxh= cnt + 1;
            }
            cnt = 0;
        }
        else{ // consider both left and right sides
            for (int j = i + 1; j < n; j++)
            {
                if (height[j] <= height[j - 1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            for (int j = i - 1; j >= 0; j--)
            {
                if (height[j] <= height[j + 1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if (maxh < cnt + 1)
            {
                maxh = cnt + 1;
            }
        }
    }
    cout << maxh << endl;

    return 0;
}