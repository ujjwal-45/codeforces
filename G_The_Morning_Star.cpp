#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        cin >> n;
        
        vector<pair<int, int>> points(n);

        for (int i = 0; i < n;i++){
            int x, y;
            cin >> x >> y;
            points[i] = make_pair(x, y);
        }

        long long int result = 0;

        map<int, int> count[4];

        for(auto [x, y]: points){
            count[0][x]++;
            count[1][y]++;
            count[2][x - y]++;
            count[3][x + y]++;
        }

        for(auto [x, y]: points){
            result += (count[0][x] + count[1][y] + count[2][x - y] + count[3][x + y] - 4);
        }

        cout << result << "\n";
    }

    return 0;
}

