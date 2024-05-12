#include<vector>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int numbers = 0;
        int g_size = grid.size();
        for(int r=0; r<g_size; r++){
            vector<int> tem_row;
            for(int c=0; c<g_size; c++){
                tem_row.push_back(grid[c][r]);
            }
            for(int c=0; c<g_size; c++){
                if(tem_row == grid[c])
                    numbers++;
            }
        }

        return numbers;
    }
};