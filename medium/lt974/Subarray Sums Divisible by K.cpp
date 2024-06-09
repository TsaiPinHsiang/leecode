class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int len= nums.size();
        int cnt = 0;
        int prefix_sum = 0;

        unordered_map<int,int> mp;
        mp[0]=1;

        for(int i=0; i<len; i++){
            prefix_sum += nums[i];
            int remainder = prefix_sum % k;
            if(remainder < 0)
                remainder+= k;
            
            if(mp.count(remainder)){
                cnt += mp[remainder];
                mp[remainder]++;
            }else{
                mp[remainder]=1;
            }
        }
        return cnt;
    }
};