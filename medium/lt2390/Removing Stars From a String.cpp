#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        vector<char> stack;
        for(auto it:s){
            if(it != '*')
                stack.push_back(it);
            else
                stack.pop_back();
        }
        string result;
        for(auto it:stack){
            result+=it;
        }
        return result;
    }
};