#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high_alti=0, sum=0;
        for(int i=0; i<gain.size(); i++){
            sum+=gain[i];
            high_alti = max(high_alti, sum);
        }
        return high_alti;
    }
};