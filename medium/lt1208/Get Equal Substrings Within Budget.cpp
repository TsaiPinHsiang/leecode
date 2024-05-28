class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int len = s.size();
        int left = 0;
        int curr_cost = 0;
        int maxl = 0;

        for(int i=0 ;i<len ;i++){
            curr_cost += abs(s[i]-t[i]);
            while(curr_cost > maxCost){
                curr_cost -= abs(s[left]-t[left]);
                left++;
            }
            maxl = max(maxl, i-left+1);
        }
        return maxl;
    }
};