#include<string>
#include<set>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int cur = 0, max_n = 0;
        set<char> vow = {'a', 'e', 'i', 'o', 'u'};
        for(int i=0; i<k; i++){
            if(vow.count(s[i]))
                cur++;
        }
        max_n = cur;
        for(int i=k; i<s.length(); i++){
            if(max_n >= k)
                return k;
            if(vow.count(s[i-k]))
                cur--;
            if(vow.count(s[i]))
                cur++;
            max_n = max(cur, max_n);
        }

        return max_n;
    }
};