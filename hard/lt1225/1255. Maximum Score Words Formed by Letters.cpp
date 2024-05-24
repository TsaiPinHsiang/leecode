class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int> map;
        for(auto letter : letters){
            map[letter]++;
        }

        int scores=0;

        function<void(int, unordered_map<char, int>, int)> explore = [&](int index,
                    unordered_map<char, int> counter, int currScore){
            scores = max(scores, currScore);
            if(index == words.size())
                return;
            for(int i=index; i<words.size(); i++){
                unordered_map<char, int> tmp_map = counter;
                string word = words[i];
                int wordScore = 0;
                bool fla = true;
                
                for(auto cha:word){
                    if(tmp_map[cha] > 0){
                        tmp_map[cha]--;
                        wordScore += score[cha-'a'];
                    }else{
                        fla = false;
                        break;
                    }
                }
                if(fla){
                    explore(i+1, tmp_map, currScore+wordScore);
                }
            }              
        };
        explore(0, map, 0);
        return scores;
    }
};