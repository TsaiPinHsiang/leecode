#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, max0=0, count = 0;
        while(right <nums.size()){
            if(nums[right] == 0){
                count++;
            }
            while(count > k){
                if(nums[left] == 0)
                    count--;
                left++;
            }
            max0 = max(max0, right - left + 1);
            right++;
        }
        return max0;
    }
};