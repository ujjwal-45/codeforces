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

int frequency_sum(vector<int> a, int k){
    int n = a.size();

    unordered_map<int, int> freq;
    forr(i,0,n){
        freq[a[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int,int>>,greater<pair<int,int>>> minheap;

    for(auto it: freq){
        minheap.push({it.second, it.first});
        if(minheap.size() > k){
            minheap.pop();
        }
    }

    int sum = 0;

    while(!minheap.empty()){
        if(k < n - 1){

            sum += minheap.top().first;
            minheap.pop();
        }
        else{
            sum = minheap.top().first;
            minheap.pop();
        }
    }

    return sum;
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
        int n, k;
        cin >> n >> k;
        vi a(n);
        forr(i,0,n){
            cin >> a[i];
        }

        int result = frequency_sum(a, k);
        cout << result << endl;
    }

    return 0;
}