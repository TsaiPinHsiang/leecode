class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int i = 0;
        int patches = 0;
        long long nextSum = 1;
    
        while(nextSum <=n){
            if(i < nums.size() && nums[i] <= nextSum){
                nextSum += nums[i++];
            }else{
                nextSum += nextSum;
                patches++;
            }
        }
        return patches;
    }
};