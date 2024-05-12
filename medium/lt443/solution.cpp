#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        for(int i=0; i<chars.size();){
            char cha = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == cha){
                count++;
                i++;
            }
            chars[ans++] = cha;
            if(count > 1){
                string s = to_string(count);
                for(int j=0; j<s.size(); j++){
                    chars[ans++] = s[j];
                }
            }
        }
        return ans;
    }
};