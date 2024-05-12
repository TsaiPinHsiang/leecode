#include<vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        int i=0;
        while(i<asteroids.size()){
            int val = asteroids[i];
            if(stack.empty()){
                stack.push_back(val);
                i++;
                continue;
            }
            int top = stack.back();
            if(val<0 && top<0 || val>0 && top>0 || val>0 && top<0){
                stack.push_back(val);
                i++;
            }
            else if(abs(val) == abs(top)){
                stack.pop_back();
                i++;
            }
            else if(abs(val)>top)
                stack.pop_back();
            else i++;
        }
        return stack;
    }
};