class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size();
         vector<int>ans;
         int i = 0;
         int j = 0;
         for(i=0;i<n;i++)
         {
             int count = 0;
             for(j=0;j<n;j++)
             {
                  if(boxes[j] == '1')
                  {
                      count += abs(i-j);
                  }
             }
             ans.push_back(count);
         }
         return ans;
         

    }
};