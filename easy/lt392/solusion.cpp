#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length())
            return 0;
        if(s=="") return true;
        queue<char> q;
        for(int i=0; i<s.length(); i++){
            q.push(s[i]);
        }
        for(int i=0; i<t.length(); i++){
            if(q.front() == t[i])
                q.pop();
        }
        if(q.size()!=0)
            return 0;
        return true;
    }
};