#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> visited; // 0: not visited, 1: visiting, 2: visited

int findCycleSum(int node, const vector<int> &edges)
{
    int current = node;
    int cycleSum = 0;
    while (true)
    {
        if (visited[current] == 1)
        {
            int start = current;
            int cycleStartSum = 0;
            do
            {
                cycleStartSum += current;
                current = edges[current];
            } while (current != start);
            return cycleStartSum;
        }
        else if (visited[current] == 2 || edges[current] == -1)
        {
            return -1;
        }
        visited[current] = 1;
        current = edges[current];
    }
}

int largestCycleSum(vector<int> &edges)
{
    int n = edges.size();
    visited.resize(n, 0);
    int maxCycleSum = -1;

    for (int i = 0; i < n; ++i)
    {
        if (visited[i] == 0)
        {
            int cycleSum = findCycleSum(i, edges);
            if (cycleSum != -1)
            {
                maxCycleSum = max(maxCycleSum, cycleSum);
            }
            int current = i;
            while (visited[current] == 1)
            {
                visited[current] = 2;
                current = edges[current];
                if (current == -1)
                    break;
            }
        }
    }

    return maxCycleSum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> edges(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> edges[i];
    }

    int result = largestCycleSum(edges);
    cout << result << endl;

    return 0;
}
