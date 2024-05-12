#include<queue>
using namespace std;

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int maxl = 0;
        int max_val = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int cur=0;
            int q_size = q.size();
            while(q_size--){
                TreeNode* tem = q.front();
                q.pop();
                cur = cur +tem->val;
                if(tem->left!=NULL)
                    q.push(tem->left);
                if(tem->right!=NULL)
                    q.push(tem->right);
            }
            level++;
            if(cur > max_val){
                max_val = cur;
                maxl = level;
            }
        }
        return maxl;
    }
};