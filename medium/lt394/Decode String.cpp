#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(auto x:s){
            if(x != ']')
                st.push(x);
            else{
                string cur_str = "";
                while(st.top() != '['){
                    cur_str = st.top() + cur_str;
                    st.pop();
                } 
                st.pop();
                string number="";
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int num = stoi(number);
                while(num!=0){
                    for(auto y:cur_str)
                        st.push(y);
                    num--;
                }
            }
        } 
        string res="";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};