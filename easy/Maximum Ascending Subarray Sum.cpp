class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int len = nums.size();
        int max_sum = nums[0], local_sum = nums[0];
        if(len == 1) return max_sum;

        for(int i = 1; i < len; i++){
            if(nums[i] <= nums[i-1]){
                max_sum = max(max_sum, local_sum);
                local_sum = nums[i];
            }else
                local_sum += nums[i];
        }
        return max(max_sum, local_sum);
    }
};