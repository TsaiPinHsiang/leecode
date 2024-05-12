#include<vector>
using namespace std;


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=0;
        int leftsum=0;

        for(int i=0; i<nums.size(); i++){
            rightsum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            rightsum = rightsum-nums[i];
            if(rightsum == leftsum)
                return i;
            leftsum+= nums[i];
        }
        return -1;
    }
};