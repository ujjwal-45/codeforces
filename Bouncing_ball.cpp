#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;


// Function to simulate the movement of the ball
int simulate(int mask, int pos, int direction, const vector<int> &A)
{
    int N = A.size();
    while (pos >= 0 && pos < N)
    {
        if (mask & (1 << pos))
        {
            // There's a wall here, reduce its height by 1
            mask &= ~(1 << pos); // Remove the wall
            if (A[pos] > 1)
            {
                mask |= (1 << pos); // Restore the wall if its height is still greater than 0
            }
            direction = -direction; // Bounce the ball
        }
        pos += direction;
    }
    return mask;
}

int countWaysToDestroyWalls(vector<int> &A)
{
    int N = A.size();
    int initial_mask = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] > 0)
        {
            initial_mask |= (1 << i);
        }
    }

    unordered_map<int, int> dp;
    dp[0] = 1; // Base case: if no walls are left, there's exactly one way (do nothing)

    function<int(int)> solve = [&](int mask)
    {
        if (dp.find(mask) != dp.end())
        {
            return dp[mask];
        }

        int total_ways = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] == 0 && !(mask & (1 << i)))
            {
                // Place the ball on empty ground
                int new_mask_left = simulate(mask, i - 1, -1, A);
                int new_mask_right = simulate(mask, i + 1, 1, A);
                total_ways += solve(new_mask_left);
                total_ways += solve(new_mask_right);
            }
        }

        dp[mask] = total_ways;
        return dp[mask];
    };

    return solve(initial_mask);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        cout << countWaysToDestroyWalls(A) << endl;
    }

    return 0;
}
