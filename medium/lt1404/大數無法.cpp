class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        int len = s.length();
        long long numb = 0;
        for(int i=0; i<len; i++){
            int back=len-1-i;
            if(s[back] == '1'){
                numb+= powerOfTwo(i);
            }
        }
        while(numb!=1){
            if(numb%2==0)
                numb/=2;
            else
                numb++;
            count++;
        }

        return count;
    }
private:
    unsigned long long powerOfTwo(int n){
        return 1ULL << n;
    }
};