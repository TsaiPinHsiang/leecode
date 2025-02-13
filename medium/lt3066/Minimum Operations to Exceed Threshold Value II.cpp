#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class Solution{
    public:
        int minOperations(vector<int> nums, int k){
            int ans=0;
            int n = nums.size();
            priority_queue<int, vector<int>, greater<int>> pq;
            for(auto i:nums){
                pq.push(i);
            }
            while(n > 2 && pq.top() < k){
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                int tem = min(x, y)*2 + max(x, y);
                pq.push(tem);
                ans ++;
            }
            return ans;
        }
};


int main(){
    Solution sol;
    vector<int> nums = {1,1,2,4,9};
    int k = 20;
    cout << sol.minOperations(nums, k)<<endl;

    return 0;
}