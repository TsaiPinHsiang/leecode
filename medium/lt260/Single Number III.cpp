class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto & x:map){
            if(x.second == 1)
                result.push_back(x.first);
        }
        return result;
    }
};