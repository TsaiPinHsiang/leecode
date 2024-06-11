class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};
        int maxN=0, ptr=0;
        for(auto num:arr1){
            freq[num]++;
            maxN = max(maxN, num);
        }
        for(auto num:arr2){
            while(freq[num]--){
                arr1[ptr++] = num;
            }
        }
        for(int j=0; j<= maxN; j++){
            while(freq[j]-- >0){
                arr1[ptr++] = j;
            }
        }
        return arr1;
    }
};