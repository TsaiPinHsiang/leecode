class ProductOfNumbers {
    public:
        vector<int> prefix_Product;
        ProductOfNumbers() {
            prefix_Product.push_back(1);
        }
        
        void add(int num) {
            if(num == 0){
                prefix_Product.clear();
                prefix_Product.push_back(1);
            }else
                prefix_Product.push_back(num * prefix_Product.back());
        }
        
        int getProduct(int k) {
            int s = prefix_Product.size();
            if(k >= s)
                return 0;
            else
                return prefix_Product.back() / prefix_Product[s-k-1];
        }
    };
    