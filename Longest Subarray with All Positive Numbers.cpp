#include <iostream>
#include <vector>
using namespace std;

int longestPositiveSubarray(const vector<int> &arr)
{
    int maxLength = 0, currentLength = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        }
        else
        {
            currentLength = 0;
        }
    }

    return maxLength;
}

int main()
{
    vector<int> arr = {1, -2, 3, 4, -5, 6, 7, 8, -9, 10};
    cout << "Longest subarray with all positive numbers: " << longestPositiveSubarray(arr) << endl;
    return 0;
}
