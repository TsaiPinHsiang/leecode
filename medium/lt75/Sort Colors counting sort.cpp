class Solution {
public:
    void sortColors(vector<int>& nums) {
        int fre[3] = {0};
        for(int i=0; i<nums.size(); i++){
            fre[nums[i]]++;
        }
        int j=0;
        for(int i=0; i<3; i++){
            while(fre[i]-->0){
                nums[j] = i;
                j++;
            }
        }
    }
};