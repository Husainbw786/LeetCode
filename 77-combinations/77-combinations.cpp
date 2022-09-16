class Solution {
public:
    vector<vector<int>>ans;
    
    void combination(int index, int k,int n,vector<int>temp)
    {
        if(temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i = index;i<=n;i++)
        {
            temp.push_back(i);
            combination(i+1,k,n,temp);
            temp.pop_back();
            
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        combination(1,k,n,temp);
        return ans;
    }
};