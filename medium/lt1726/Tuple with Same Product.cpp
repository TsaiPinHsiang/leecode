class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> fre;
        fre.reserve(len*(len-1)/2); 

        for(int i = 0; i < len -1; i++){
            for(int j = i+1; j < len; j++){
                fre[nums[i]*nums[j]]++;
            }
        }
        int output = 0;
        for(pair<int, int> f:fre){
            if(f.second>1){
                output += (f.second * (f.second-1))/2 *8 ;
            }
        }
        return output;
    }
};