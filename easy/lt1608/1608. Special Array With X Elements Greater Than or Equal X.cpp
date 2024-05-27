class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int pre = -1;
        for(int i=0; i<len;i++){
            if(nums[i] >= len-i && len-i >pre)
                return len-i;
            pre = nums[i];
        }
        return -1;
    }
};