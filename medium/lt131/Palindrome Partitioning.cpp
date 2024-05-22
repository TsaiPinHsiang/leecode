#include<vector>
#include<fuction>

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> cur;
        int len = s.length();

        function<void(int)> explore = [&](int index){
            if(index >= len){
                result.push_back(cur);
                return;
            }

            for(int i=index; i<len; i++){
                string subStr = s.substr(index, i-index+1);
                if(isPalindrome(subStr)){
                    cur.push_back(subStr);
                    explore(i+1);
                    cur.pop_back();
                }
            }
        };

        explore(0);
        return result;
    }

private:
    bool isPalindrome(const string& s){
        int left = 0, right = s.length()-1;
        while(left < right){
            if(s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};