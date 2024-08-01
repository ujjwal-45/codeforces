#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long sum1 = (k * (k + 1)) / 2;
        long long sum2 = (k * (2 * n - k + 1)) / 2;
        if (x >= sum1 && x <= sum2)
            cout << "YES" << endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}
