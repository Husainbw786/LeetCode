class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string>ans;
        string prev = "";
        for(auto x : words)
        {
            string curr = x;
            sort(curr.begin(),curr.end());
            if(curr != prev)
            {
                ans.push_back(x);
            }
            prev = curr;
        }
        return ans;
        
    }
};