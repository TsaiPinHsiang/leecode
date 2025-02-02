class Solution {
public:
    bool check(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) return true;
        int count = 0;

        for(int i = 0; i < len; i++){
            if(nums[i] > nums[(i+1) % len])
                count++;
        }
        return (count <= 1);
    }
};