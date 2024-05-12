#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n1={}, n2={};
        set<int> set_1, set_2;
        for(int i=0; i<nums1.size(); i++){
            if(!set_1.count(nums1[i]))
                set_1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            if(!set_2.count(nums2[i]))
                set_2.insert(nums2[i]);
        }
        for(auto tem : set_1){
            if(!set_2.count(tem))
                n1.push_back(tem);
        }
        for(auto tem : set_2){
            if(!set_1.count(tem))
                n2.push_back(tem);
        }
        vector<vector<int>> ans;
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
    }
};