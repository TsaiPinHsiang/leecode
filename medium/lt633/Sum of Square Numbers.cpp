class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int, int> mp;
        for(int i=0; i<=sqrt(c);i++){
            mp[i*i]++;
            int b_sqaure = c - i*i;
            if(mp[b_sqaure]){
                return true;
            }
        }
        return false;
    }
};