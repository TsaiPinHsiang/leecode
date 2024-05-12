#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int maxa = 0, area=0;
        while(left < right){
            area = (right - left) * min(height[left], height[right]);
            maxa = max(area, maxa);
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxa;
    }
};