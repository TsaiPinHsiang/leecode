// kind of sliding window
// O(n^2)


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int curr_sum = nums[0];
        int len = nums.size();

        for(int i=1; i<len; i++){
            if(nums[i] == 0 && nums[i-1] == 0)
                return true;
            
            curr_sum += nums[i];
            if(curr_sum % k == 0)
                return true;

            int start = 0;
            int tem_sum = curr_sum;
            while((i-start) >1 && tem_sum>= k){
                tem_sum -= nums[start++];

                if(tem_sum % k == 0)
                    return true;
            }
        }
        return false;
    }
};