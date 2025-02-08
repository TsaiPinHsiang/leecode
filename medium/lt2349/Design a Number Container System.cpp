class NumberContainers {
    public:
        unordered_map<int, int> map;
        unordered_map<int, set<int>> idx;
        NumberContainers() {
            map.reserve(10^5);
        }
        
        void change(int index, int number) {
            if(map.count(index)){
                int val = map[index];
                idx[val].erase(index); 
                if(idx[val].empty())
                    idx.erase(val);
            }
            map[index] = number;
            idx[number].insert(index);
        }
        
        int find(int number) {
            if(idx.count(number) && !idx[number].empty())
                return *idx[number].begin();
            else
                return -1;
        }
    };