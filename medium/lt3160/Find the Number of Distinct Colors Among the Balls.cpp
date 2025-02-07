class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> col_map, ball_map;
        vector<int> result;
        int distinct = 0;
        for(auto & q : queries){
            int pos = q[0];
            int col = q[1];
            if(ball_map.count(pos)){
                if(--col_map[ball_map[pos]] == 0)
                    distinct--;
            }
            ball_map[pos] = col;
            if(++col_map[col] == 1)
                distinct++;
            result.push_back(distinct);
        }
        return result;
    }
};