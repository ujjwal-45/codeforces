#include <iostream>
#include <vector>
#include <algorithm>

class UnionFind
{
private:
    std::vector<int> parent, rank;

public:
    UnionFind(int n)
    {
        parent.resize(n);
        rank.assign(n, 0);
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (x != parent[x])
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x != y)
        {
            if (rank[x] < rank[y])
            {
                std::swap(x, y);
            }
            parent[y] = x;
            if (rank[x] == rank[y])
            {
                rank[x]++;
            }
        }
    }
};

bool canMakeGraphConnected(const std::vector<long long> &populations, int n, long long c)
{
    std::vector<long long> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + populations[i - 1];
    }

    UnionFind uf(n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            long long total_population = prefixSum[j] - prefixSum[i - 1];
            if (total_population >= i * j * c)
            {
                uf.unite(i - 1, j - 1);
            }
        }
    }

    int connected_components = 0;
    for (int i = 0; i < n; ++i)
    {
        if (uf.find(i) == i)
        {
            connected_components++;
        }
    }

    return (connected_components == 1);
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        long long c;
        std::cin >> n >> c;

        std::vector<long long> populations(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> populations[i];
        }

        if (canMakeGraphConnected(populations, n, c))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}
