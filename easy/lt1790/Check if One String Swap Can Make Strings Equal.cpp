class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;

        int len = s1.length(), diff = 0;
        int freMap1[26] = {0}, freMap2[26] = {0};

        for(int i = 0; i < len; i++){
            if(s1[i] != s2[i]){
                diff++;
                if(diff>2)
                    return false;
            }
            freMap1[s1[i] - 'a']++;
            freMap2[s2[i] - 'a']++;
        }
        for(int i = 0; i<26;i++)
            if(freMap1[i] != freMap2[i])
                return false;
        return true;
    }
};