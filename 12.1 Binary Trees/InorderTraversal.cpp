#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* node = root;
    vector<int> inorder;

    while(true) {
        if(node != nullptr) {
            st.push(node);
            node = node->left;
        } else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }
    return inorder;
}

int main() {

    /*
                1
               / \
              2   3
             / \
            4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal Result: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}