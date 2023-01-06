class Cashier {
public:
    
    unordered_map<int,int>mp;
    double dis ;
    int count = 0;
    int x;
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        
        int i;
        x = n;
        dis = (double)(100 - discount)/100; 
        for(i=0;i<products.size();i++)
        {
            mp[products[i]] = prices[i];
        } 
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        
        count++;
        int m = product.size();
        double ans = 0;
        int i;
        for(i=0;i<m;i++)
        {
            ans += (mp[product[i]] * amount[i]);
        }
        if(count % x == 0)
        {
            ans = ans * dis;
        }
        return ans;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */