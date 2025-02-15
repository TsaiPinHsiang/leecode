// author: An-Wen Deng
// backtracking


class Solution {
    public:
        bool partition(int x, int target){
            if(x == target) return true;
            if(x == 0) return target == 0;
            int ten = min(x, 1000);
            for(int m = 10; m <= ten; m*=10){
                if(partition(x/m, target - x%m))
                    return true;
            }
            return 0;
        }
    
        int punishmentNumber(int n) {
            int sum = 0;
            for(int i=1; i<=n; i++){
                int square = i*i;
                sum += partition(square, i) ? square : 0;
            }
            return sum;
        }
    };