class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int diff=0;
        vector<int> copy(heights);
        sort(copy.begin(), copy.end());

        for(int i=0; i<heights.size(); i++){
            if(copy[i] != heights[i])
                diff++;
        }
        return diff;
    }
};