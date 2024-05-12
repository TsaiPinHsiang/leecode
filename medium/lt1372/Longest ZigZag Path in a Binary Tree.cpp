using namespace std;
class Solution {
public:
    void calzz(TreeNode* root, int dir, int len){
        if(root == NULL)
            return;
        maxlen = max(len, maxlen);
        calzz(root->left, 0, dir?len+1:1);
        calzz(root->right, 1, dir?1:len+1);
    }
    int longestZigZag(TreeNode* root) {
        calzz(root->right, 1, 1);
        calzz(root->left, 0, 1);
        return maxlen;
    }
private:
    int maxlen = 0;
};