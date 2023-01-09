class ATM {
public:
    
     vector<pair<int,long long int>>v={{20,0},{50,0},{100,0},{200,0},{500,0}};
    ATM() {
        
    }
    
    void deposit(vector<int> banknotesCount) {
        
        for(int i=0;i<5;i++)
        {
            v[i].second += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        
        vector<int>ans(5,0);
        for(int i=v.size()-1;i>=0;i--)
        {
            if(amount==0 or amount<v[i].first)
            {
                ans[i]=0;
            }
            else if(amount>=v[i].first)
            {
                long long int num = amount / v[i].first;
                num = min(num,v[i].second);
                amount = amount - (num * v[i].first);
                ans[i] = num;
            }
        }
         if(amount>0)
        {
            return {-1};
        }
        for(int i=0;i<ans.size();i++)
        {
            v[i].second-=ans[i];
        }
        return ans;
        
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */