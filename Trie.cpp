#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using lli = long long int;

const ll mod = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;

    int t;
    cin>>t;
    while(t--){
        
    }

    return 0;
}

class Node
{
public:
    Node *left;
    Node *right;
    int max_idx;

    Node(int idx)
    {
        left = nullptr;
        right = nullptr;
        max_idx = idx;
    }
};

class Trie
{
public:
    Trie(int x)
    {
        root = new Node(0);
        this->x = x;
    }

    void insert(int idx, int val)
    {
        Node *curr = root;
        for (int i = 31; i >= 0; --i)
        {
            if ((val >> i) & 1)
            {
                if (!curr->right)
                {
                    curr->right = new Node(idx);
                }
                curr = curr->right;
            }
            else
            {
                if (!curr->left)
                {
                    curr->left = new Node(idx);
                }
                curr = curr->left;
            }
            curr->max_idx = max(idx, curr->max_idx);
        }
    }

    int find(int idx, int val)
    {
        int x = this->x;
        Node *curr = root;
        int ans = numeric_limits<int>::max();
        for (int i = 31; i >= 0; --i)
        {
            if ((x >> i) & 1)
            {
                if ((val >> i) & 1)
                {
                    if (curr->right)
                    {
                        ans = min(ans, idx - curr->right->max_idx);
                    }
                    if (curr->left)
                    {
                        curr = curr->left;
                    }
                    else
                    {
                        return ans;
                    }
                }
                else
                {
                    if (curr->left)
                    {
                        ans = min(ans, idx - curr->left->max_idx);
                    }
                    if (curr->right)
                    {
                        curr = curr->right;
                    }
                    else
                    {
                        return ans;
                    }
                }
            }
            else
            {
                if ((val >> i) & 1)
                {
                    if (curr->right)
                    {
                        curr = curr->right;
                    }
                    else
                    {
                        return ans;
                    }
                }
                else
                {
                    if (curr->left)
                    {
                        curr = curr->left;
                    }
                    else
                    {
                        return ans;
                    }
                }
            }
        }
        if (curr)
        {
            return min(ans, idx - curr->max_idx);
        }
        return ans;
    }

private:
    Node *root;
    int x;
};
