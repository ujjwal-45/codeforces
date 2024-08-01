#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> children[n];
    int a[n + 5];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c >> a[i];
        if (c != -1)
        {
            --c;
            children[c].push_back(i);
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            int pos = 1;
            for (int x : children[i])
            {
                if (a[x] == 0)
                {
                    pos = 0;
                    break;
                }
            }
            if (pos == 1)
            {
                ans.push_back(i + 1);
            }
        }
    }
    if (ans.size() > 0)
    {
        for (int x : ans)
        {
            cout << x << " ";
        };
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}