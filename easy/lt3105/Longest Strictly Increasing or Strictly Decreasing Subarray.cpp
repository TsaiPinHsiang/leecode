class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = nums.size();
        int output = 0, cnt = 1;
        for(int i = 1 ; i < len ; i++){
            if(nums[i] > nums[i-1]){
                cnt++;
            }else{
                output = max(cnt, output);
                cnt=1;
            }
        }
        output = max(cnt, output);
        cnt = 1;
        for(int i = 1 ; i < len ; i++){
            if(nums[i] < nums[i-1]){
                cnt++;
            }else{
                output = max(cnt, output);
                cnt=1;
            }
        }
        return max(output, cnt);
    }
};