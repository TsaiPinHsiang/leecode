class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        twin_selectionSort(profits, capital);
        priority_queue<int> maxHeap;
        int j=0;
        for(int i=0; i<k; i++){
            while(j<n && capital[j] <= w){
                maxHeap.push(profits[j]);
                j++;
            }
            if(maxHeap.empty())
                break;
            w += maxHeap.top();
            maxHeap.pop();
        } 
        return w;
    }

    void twin_selectionSort(vector<int>& a, vector<int>& b){
        int n = a.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(b[i] >= b[j]){
                    swap(b[i], b[j]);
                    swap(a[i], a[j]);
                }
            }
        }
    }
};