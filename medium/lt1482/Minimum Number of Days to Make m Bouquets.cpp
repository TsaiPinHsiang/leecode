class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        int start=0, end=1e9;
        int mid = start + (start+end)/2;
        int days = -1;
        while(start<=end){
            int con = 0, bouq =0;
            for(int i=0; i<n; i++){
                if(bloomDay[i]<= mid){
                    con++;
                    if(con>=k){
                        bouq++;
                        con=0;
                    }
                }else{
                    con=0;
                }
            }

            if(bouq>=m){
                days = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return days;
    }
};