class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> hash(26,INT_MAX);

        for(auto word : words){
            vector<int> fre(26, 0);
            for(char c:word){
                fre[c-'a']++;
            }
            for(int i=0; i<26;i++){
                hash[i] = min(hash[i], fre[i]); 
            }
        }
        vector<string> result;
        for(int i=0; i<26; i++){
            while(hash[i]-- >0){
                result.push_back(string(1, i+'a'));
            }
        }
        return result;
    }
};