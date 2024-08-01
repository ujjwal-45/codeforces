#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> children, vector<int> s, int par, int curr)
{
    vector<int> a;
    int ans = 0;
    int s_parent = 0;
    if(par != -1)
        s_parent = s[par];

    int min_v = INT_MAX;
    for (int i = 0; i < s.size();i++){
        if (s[i] == -1)
        {
            
            for(int child : children[curr]){
                min_v = min(min_v, s[child]);
            }
        }
        s[i] = min_v - s_parent;
        a[i] = s[i] - s_parent;
        ans += s[i];
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> children;
        vector<int> s;

        for (int i = 0; i < n - 1;i++){
            int parent;
            cin >> parent;
            --parent;
            children[parent].push_back(i + 1);
        }
        for (int i = 0; i < n; i++)
        {   
            cin >> s[i];
        }
        int result = 0;
        dfs(children, s, 0, -1);

        bool possible = 1;
        for (int i = 0; i < n;i++){
            if(s[i] < 0){
                possible = 0;
                break;
            }
        }
        if(!possible){
            cout << -1 << endl;
        }
        else{
            cout << result << endl;
        }

            return 0;
    }
}