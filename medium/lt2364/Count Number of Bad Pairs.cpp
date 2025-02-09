class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            int len = nums.size();
            long long cnt = 0;
            unordered_map<int, int> map;
            map.reserve(len);
    
            for(int i = 0; i < len; i++){
                int diff = nums[i] - i;
                if(map.count(diff))
                    cnt += (i-map[diff]);
                else
                    cnt += i;
                map[diff]++;
            }
            return cnt;
        }
    };