#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimum_operations(vector<int> &boxes)
{
    int max_amount = *max_element(boxes.begin(), boxes.end()); // Find the target (max amount)
    int operations = 0;

    for (int amount : boxes)
    {
        int diff = max_amount - amount;
        operations += diff / 5; // Use Rs 5 additions
        diff %= 5;
        operations += diff / 1; // Use Rs 1 additions
    }

    return operations;
}

int main()
{
    // Example input
    vector<int> boxes = {2, 2, 3, 7};

    // Calculate and output the minimum operations
    cout << minimum_operations(boxes) << endl;

    return 0;
}