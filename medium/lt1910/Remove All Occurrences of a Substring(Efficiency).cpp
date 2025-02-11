class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string stack = "";
            int tar_size = 0, par_size = part.size();
    
            for(int i = 0; i < s.size(); i++){
                stack.push_back(s[i]);
                tar_size++;
                if(tar_size >= par_size && stack.ends_with(part)){
                    tar_size -= par_size;
                    stack.resize(tar_size);
                }
            }
            return stack;
        }
    };