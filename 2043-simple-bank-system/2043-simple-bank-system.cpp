class Bank {
public:
    unordered_map<int,long long>mp;
    int n;
    Bank(vector<long long>& balance) {
        
         n = balance.size();
        for(int i=0;i<n;i++)
        {
            mp[i] = balance[i];
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        
        if(account1 > n || account2 > n)
        {
            return false;
        }
         if(mp[account1 - 1] >= money)
         {
            mp[account1 - 1] -= money;
            mp[account2 - 1] += money;
            return true; 
         }
        return false;
         
    }
    
    bool deposit(int account, long long money) {
        
        if(account <= n)
        {
            mp[account - 1] += money;
            return true;
        }
       return false;
        
    }
    
    bool withdraw(int account, long long money) {
        
        if(account > n)
        {
            return false;
        }
        if(mp[account - 1] >= money)
        {
            mp[account - 1] -= money;
            return true;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */