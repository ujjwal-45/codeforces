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


struct TreeNode{
    string name;
    TreeNode *parent;
    vector<TreeNode *> childrens;
    set<TreeNode *> lockedDescendents;
    int lockedById;
    bool isLocked;


    TreeNode(string Name, TreeNode* par){
        name = Name;
        parent = par;
        lockedById = -1; // initially assuming its not locked
        isLocked = false;
    }

    void AddChild(vector<string>& str){
        for(auto &it : str){
            childrens.push_back(new TreeNode(it, this));
        }
    }
};

struct MAryTree{
    TreeNode *root;
    unordered_map<string, TreeNode *> mp;
    MAryTree(string str){ // constructing the tree
        root = new TreeNode(str, nullptr);
    }

    void buildTree(vector<string>& str, int m){
        queue<TreeNode *> q;
        int k = 1, i, SIZE = str.size();
        q.push(root);

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            mp[node->name] = node;
            vector<string> b;
            for (int i = k; i < min(SIZE, k + m);i++){
                b.push_back(str[i]);
            }
            node->AddChild(b);
            
            for(TreeNode* child : node->childrens){
                q.push(child);
            }
            k = i;
        }
    }

    void update(TreeNode* node, TreeNode* curr)
    { // inform all ancestors about child locking
        while(node){
            node->lockedDescendents.insert(curr);
            node = node->parent;
        }
    }

    bool lock(string name, int id){
        TreeNode *node = mp[name];
        if(node->isLocked || node->lockedDescendents.size()){
            return false;
        }
        TreeNode *par = node->parent;
        if(par->isLocked){
            return false;
        }
        par = par->parent;
        update(node->parent, node);
        node->isLocked = true;
        node->lockedById = id;
        return true;
    }

    bool unlock(string name, int id){
        TreeNode *node = mp[name];
        if(!node->isLocked || node->lockedById != id){
            return false;
        }
        TreeNode *par = node->parent;
        while(par){
            par->lockedDescendents.erase(node);
            par = par->parent;
        }

        node->isLocked = false;
        node->lockedById = 1;
        return true;
    }
};

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