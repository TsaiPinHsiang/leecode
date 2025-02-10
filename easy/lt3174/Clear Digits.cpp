class Solution {
    public:
        string clearDigits(string s) {
            stack<char> cha;
            for (char c : s) {
                if (isdigit(c)) {
                    if (!cha.empty()) cha.pop();
                } else {
                    cha.push(c);
                }
            }
            string output;
            while (!cha.empty()) {
                output = cha.top() + output;
                cha.pop();
            }
            return output;
        }
    };