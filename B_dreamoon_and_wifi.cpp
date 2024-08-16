#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define forr(i,x,n) for (int i = x; i < n; i++)
#define forr1(i,x,n) for (int i = x; i <= n; i++)
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

    string s1, s2;
    cin >>s1 >> s2;
    int n = s1.size();

    int total_pos = 0;
    forr(i,0,n){
        if(s1[i] == '+'){
            total_pos += 1;
        }
        else{
            total_pos -= 1;
        }
    }
    int finalPos = 0;
    int moves = 0; // '?'

    forr(i,0,n){
        if(s2[i] == '?'){
            moves++;
        }
        else{
            finalPos += (s2[i] == '+' ? 1 : -1);
        }
    }

    int distance = total_pos - finalPos;
    double result;

    if((distance+moves) % 2 != 0 || (moves < abs(distance))){
        result = 0;
    }
    else{
        int m = (moves + abs(distance)) / 2;
        int c = 1;
        forr(i,0,m){
            c *= moves - i;
        }
        forr1(i,2,m){
            c /= i;
        }
        result = double(c) / (1 << moves);
    }

    printf("%.12f\n", result);

    return 0;
}