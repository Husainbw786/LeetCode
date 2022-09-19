class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
     
        int ans = 0;
        int i;
        int n = operations.size();
        for(i=0;i<n;i++)
        {
            if(operations[i] == "X++" || operations[i] == "++X")
            {
                ans++;
            }
            if(operations[i] == "X--" || operations[i] == "--X")
            {
                ans--;
            }
        }
        return ans;
    }
};