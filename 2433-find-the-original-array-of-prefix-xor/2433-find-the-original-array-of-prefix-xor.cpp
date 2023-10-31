class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int n = pref.size();
        vector<int>v(n,0);
        for(int i=n-1;i>0;i--)
        {
            
            v[i] = pref[i]^pref[i-1];
            
        }
        v[0] = pref[0];
        return v;
       
    }
};
