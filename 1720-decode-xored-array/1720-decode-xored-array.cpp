class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        int n = encoded.size();
        vector<int>ans;
        ans.push_back(first);
        int x = first ^ encoded[0];
        ans.push_back(x);
        for(int i=1;i<n;i++)
        {
            x = x^encoded[i];
            ans.push_back(x);
        }
        return ans;
    }
};