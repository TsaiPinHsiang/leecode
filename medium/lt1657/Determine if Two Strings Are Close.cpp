#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(auto x:word1){
            m1[x]++;
        }
        for(auto x:word2){
            if(m1.find(x) == m1.end())
                return false;
            m2[x]++;
        }
        vector<int> fre1, fre2;
        for(auto x:m1){
            fre1.push_back(x.second);
        }
        for(auto x:m2){
            fre2.push_back(x.second);
        }
        sort(fre1.begin(), fre1.end());
        sort(fre2.begin(), fre2.end());

        return fre1 == fre2;
    }
};