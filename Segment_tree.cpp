#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define for(i, n) for (int i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

class SegmentTree{
    private:
        struct Node{
            int data;
            int start;
            int end;
            Node *left;
            Node *right;

            Node(int start, int end) : start(start), end(end), left(nullptr), right(nullptr) {}
        };
        Node *root;

    public:
        SegmentTree(const vector<int>& arr){
            this->root = constructTree(arr, 0, arr.size() - 1);
        }

    private:
        Node* constructTree(const vector<int>& arr, int start, int end){
            if(start == end){
                // leaf node
                Node *leaf = new Node(start, end);
                leaf->data = arr[start];
                return leaf;
            }

            Node *node = new Node(start, end);

            int mid = (start + end) / 2;
            node->left = constructTree(arr, start, mid);
            node->right = constructTree(arr, mid + 1, end);

            node->data = node->left->data + node->right->data;

            return node;
        }
    
    public:
        void display(){
            display(root);
        }

    private:
        void display(Node* node){
            if(node == nullptr){
                return;
            }

            string str = "";

            if(node->left != nullptr){
                str = str + "Interval =[" + to_string(node->left->start) + "-" + to_string(node->left->end) + "] and data: " + to_string(node->left->data) + " => ";
            }
            else
            {
                str = str + "No left child ";
            }

            // for current node
            str = str + "Interval=[" + to_string(node->start) + "-" + to_string(node->end) + "] and data: " + to_string(node->data) + " <= ";

            if (node->right != nullptr)
            {
                str = str + "Interval=[" + to_string(node->right->start) + "-" + to_string(node->right->end) + "] and data: " + to_string(node->right->data);
            }
            else
            {
                str = str + "No right child ";
            }

            cout << str << '\n';

            //call recursion
            if(node->left != nullptr){
                display(node->left);
            }
            if (node->right != nullptr)
            {
                display(node->right);
            }
        }

    public:
        int query(int qsi, int qei){
            return query(root, qsi, qei);
        }

    private:
        int query(Node* node, int qsi, int qei){
            if(node->start >= qsi && node->end <= qei){
              // node is completely lying inside the query
              return node->data;
            }
            else if(node->start > qei || node->end < qsi){
                return 0; // coompletely outside
            }
            else{
                // if overlapping
                return (query(node->left, qsi, qei) + query(node->right, qsi, qei));
            }
        }

    public:
        void update(int index, int val){
            root->data = update(root, index, val);
        }
    
    private:
        int update(Node* node, int index, int val){
            if(index >= node->start && index <= node->end){
                if(index == node->start && index == node->end){
                    node->data = val;
                    return node->data;
                }
                else{
                    int leftAns = update(node->left, index, val);
                    int rightAns = update(node->right, index, val);

                    node->data = leftAns + rightAns;
                    return node->data;
                }
            }
            return node->data;
        }
};

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     fast;

    vector<int> arr = {3, 8, 7, 6, -2, -8, 4, 9};

    SegmentTree tree(arr);
    tree.display();
    return 0;
}