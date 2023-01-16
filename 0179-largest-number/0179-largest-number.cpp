
  bool compare(string a,string b)
   {
      return a+b > b+a;
   }
class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        
        vector<string>v;
        int i;
        string ans = "";
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            string temp = to_string(nums[i]);
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),compare);
        for(i=0;i<n;i++)
        {
            ans += v[i];
        }
        if(ans[0] == '0')
        {
            return "0";
        }
        return ans;
    }
};