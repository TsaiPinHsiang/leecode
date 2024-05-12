#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = 0;
        vector<bool> ans;
        for(int i=0; i<candies.size(); i++){
            if(candies[i] > greatest)
                greatest = candies[i];
        }
        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies < greatest)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};