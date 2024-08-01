#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int minA = *min_element(a.begin(), a.end());
    int minB = *min_element(b.begin(), b.end());

    long long costWithMinA = 0;
    for (int i = 0; i < n; i++)
    {
        costWithMinA += static_cast<long long>(a[i]) + static_cast<long long>(minB);
    }

    long long costWithMinB = 0;
    for (int i = 0; i < n; i++)
    {
        costWithMinB += static_cast<long long>(minA) + static_cast<long long>(b[i]);
    }

    long long minTotalCost = min(costWithMinA, costWithMinB);

    cout << minTotalCost << endl;
    }

    return 0;
}
