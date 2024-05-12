#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(), nums.end());
        int count = 0;
        while(left < right){
            if(nums[left]+nums[right] == k){
                left++;
                right--;
                count++;
            }else if (nums[left] + nums[right] < k){
                left++;
            }else
                right--;
        }
        return count;
    }
};