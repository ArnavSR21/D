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

vector<int> preOrderTraversal(TreeNode* root) {
    vector<int> preorder;
    if(root == nullptr) return preorder;

    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()) {
        TreeNode* node = st.top();
        st.pop();

        preorder.push_back(node->val);

        if(node->right != nullptr) st.push(node->right);
        if(node->left != nullptr) st.push(node->left);
    }
    return preorder;
}

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = preOrderTraversal(root);

    cout << "Preorder Traversal result: ";

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}