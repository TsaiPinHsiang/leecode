class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            char tem = s[left];
            s[left] = s[right];
            s[right] = tem;
            left++;
            right--;
        }
    }
};