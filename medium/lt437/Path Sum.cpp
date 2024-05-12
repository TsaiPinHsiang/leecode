class Solution {
public:
    int pathSum(TreeNode* root, long targetSum) {
        if(root != NULL){
            cal_sum(root, targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return ans;
    }

    void cal_sum(TreeNode* root, long sum){
        if(root == NULL)
            return;
        if(root->val == sum)
            ans++;
        cal_sum(root->left, sum - root->val);
        cal_sum(root->right, sum - root->val);
    } 
private:
    long ans=0;
};