#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0, right=0, long_sub=0, zeros=0;
        while(right<nums.size()){
            if(nums[right] == 0)
                zeros++;
            while(zeros>1){
                if(nums[left]==0)
                    zeros--;
                left++;
            }
            long_sub= max(right-left+1-zeros, long_sub);
            right++;
        }

        return (long_sub == nums.size()) ? long_sub-1 : long_sub;
    }
};