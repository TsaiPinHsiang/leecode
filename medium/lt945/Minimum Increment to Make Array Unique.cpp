class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        countsort(nums);
        int ans=0;
        int maxN = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxN){
                maxN = nums[i];
            }else{
                ans += maxN-nums[i]+1;
                maxN++;
            }
        }
        return ans;
    }

    void countsort(vector<int>& nums){
        int fre[100001] = {0};
        for(int i=0; i<nums.size(); i++){
            fre[nums[i]]++;
        }
        int j=0;
        for(int i=0; i<100001; i++){
            while(fre[i]-->0){
                nums[j++]=i;
            }
        }
    }
};