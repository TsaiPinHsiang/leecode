#include<vector>
using namespace std;

class Solution {
public:
    void get_leaves(TreeNode* root, vector<int> &leaves){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            leaves.push_back(root->val);
        get_leaves(root->left, leaves);
        get_leaves(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left_leaves, right_leaves;
        get_leaves(root1, left_leaves);
        get_leaves(root2, right_leaves);

        return left_leaves == right_leaves;
    }
};