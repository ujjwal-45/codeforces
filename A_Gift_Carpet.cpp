#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int row, col;
        cin >> row >> col;

        vector<string> li;

        for (int i = 0; i < row; i++)
        {
            string input;
            cin >> input;
            li.push_back(input);
        }

        int count = 0;

        string p = "vika";
        int ind = 0;
        int counts = 0;

        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                string s = li[j];
                char c = s[i];
                if (c == p[ind])
                {
                    ind++;
                    counts++;
                    break;
                }
            }
            if (counts == 4)
                break;
        }

        if (counts == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;
    }

    return 0;
}