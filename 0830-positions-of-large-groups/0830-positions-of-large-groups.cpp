class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
       int n = s.size();
       int i;
       int maxi = 0;
       bool flag = true;
       vector<vector<int>>ans;
        vector<int>temp;
       for(i=0;i<n-1;i++)
       {
           int count = 0;
          
           int start = 0;
           int end = 0;
           while(s[i] == s[i+1])
           {
               if(flag)
               {
                   start = i;
                   flag = false;
               }
                count++;  
                i++;
           }
           flag = true;
           end = i;
           if(count >= 2)
           {
               temp.push_back(start);
               temp.push_back(end);
               ans.push_back(temp);
               temp.clear();
           }
       }
       return ans;
    }
};