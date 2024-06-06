
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int len = hand.size();
        if(len % groupSize !=0) return false;

        sort(hand.begin(), hand.end());
        for(int i=0; i<len; i++){
            if(hand[i] >= 0){
                int next = hand[i]+1, j=1;
                hand[i] = -1;
                int count=1;
                while(i+j <len && count < groupSize){
                    if(hand[i+j] == next){
                        next = hand[i+j]+1;
                        hand[i+j] = -1;
                        count++;
                    }
                    j++;
                }

                if(count != groupSize)
                    return false;
            }
        }
        return true;
    }
};