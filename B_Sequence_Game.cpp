#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string ans;
        ans += to_string(arr[0]) + " ";

        int prev = arr[0];
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            int next = arr[i];

            if (prev <= next)
            {
                ans += to_string(next) + " ";
                prev = next;
                count++;
            }
            else
            {
                ans += to_string(next) + " " + to_string(next) + " ";
                prev = next;
                count += 2;
            }
        }

        cout << count << endl;
        cout << ans << endl;
        t--;
    }

    return 0;
}