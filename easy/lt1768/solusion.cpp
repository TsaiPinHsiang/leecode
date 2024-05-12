#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int m = word1.size(), n = word2.size();
        int j = 0;
        while(j < m || j < n){
            if(j < m)
                ans += word1[j];
            if(j < n)
                ans += word2[j];
            j++;
        }
        return ans;
    }
};