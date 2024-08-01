#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

int arr[1000005];

void solve(int n){
    priority_queue<pair<int, pair<int, int>>> q;

    q.push({n, {-1, -n}}); // storing negative to make it a max heap, to get the shortest starting point in the array(leftmost)
    int curr_action = 1;

    while(!q.empty()){
        int l = -q.top().second.first;
        int r = -q.top().second.second;
        q.pop();

        int mid = (l + r) / 2;
        arr[mid] = curr_action;
        curr_action++;

        if(l == r) continue;
        
        if(l < mid){
            q.push({mid - l, {-l, -(mid - 1)}});
        }
        if(mid < r){
            q.push({r - mid, {-(mid + 1), -r}});
        }
    }
}

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        solve(n);
        for (int i = 1; i <= n;i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

    return 0;
}