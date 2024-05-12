class Solution {
public:
    void Numbers(TreeNode* root, int max){
        if(root == NULL)
            return;
        if(root->val >= max){
            max = root->val;
            ans++;
        }
        Numbers(root->left, max);
        Numbers(root->right, max);
    }

    int goodNodes(TreeNode* root) {
        int max_number = INT_MIN;
        Numbers(root, max_number);
        return ans;
    }
private:
    int ans=0;
};