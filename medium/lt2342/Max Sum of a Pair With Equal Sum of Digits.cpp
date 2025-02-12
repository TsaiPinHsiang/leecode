#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution{
public:
    int digitSum(int x){
        return x;
    }

    int maximumSum(vector<int>& nums){
        unordered_map<int, priority_queue<int>> map;
        for(auto i : nums){
            int sum = 0, n = i;
            while(n){
                sum += n % 10;
                n /= 10;
            }
            map[sum].push(i);
        }

        int ans = -1;
        for(auto & x : map){
            if(x.second.size() > 1){
                int sum = x.second.top();
                x.second.pop();
                sum += x.second.top();
                ans = max(ans, sum);
            }
        }
        return ans;
    }

};


int main(){
    Solution sol;
    vector<int> nums= {18, 43, 36, 13, 7, 36, 29};
    cout << sol.maximumSum(nums)<< endl;
    return 0;
}