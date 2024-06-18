class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        vector<pair<int, int>> job;
        for (int i = 0; i < n; i++) {
            job.emplace_back(difficulty[i], profit[i]);
        }
        sort(job.begin(), job.end());
        sort(worker.begin(), worker.end());

        int most_profit = 0, max_profit = 0, i = 0;

        for (int w : worker) {
            while (i < n && job[i].first <= w) {
                max_profit = max(max_profit, job[i].second);
                i++;
            }
            most_profit += max_profit;
        }
        return most_profit;
    }
};