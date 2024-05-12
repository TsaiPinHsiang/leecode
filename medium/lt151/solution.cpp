#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int len=0;
        string result = "";
        stack<string> st;
        for(int i=0; i<s.length(); i++){
            if(s[i] != ' '){
                len++;
            }if(s[i] != ' ' && i == s.length()-1){
                string substr = s.substr(i-len+1, len);
                st.push(substr);
                len = 0;
            }
            else if(len !=0 && s[i] == ' '){
                string substr = s.substr(i-len, len);
                st.push(substr);
                len = 0;
            }
        }
        while(!st.empty()){
            result += " ";
            result += st.top();
            st.pop();
        }
        return result.substr(1, result.size());
    }
};