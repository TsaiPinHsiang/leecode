class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        while(s != "1"){
            if(s.back() == '1'){
                int i = s.length()-1;
                while(i>=0 && s[i] == '1'){
                    s[i--]='0';
                }
                if(i>=0) 
                    s[i]='1';
                else 
                    s = '1'+s;
            }
            else{
                s.pop_back();
            }
            count++;
        }
        return count;
    }
};