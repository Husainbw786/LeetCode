class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        int i;
        vector<string>ans;
        for(i=1;i<=n;i++)
        {
            if( i % 3 == 0 && i % 5 == 0)
            {
                string temp = "FizzBuzz";
                ans.push_back(temp);
            }
            else if(i % 3 == 0)
            {
                string temp = "Fizz";
                ans.push_back(temp);
            }
            else if(i % 5 == 0)
            {
                string temp = "Buzz";
                ans.push_back(temp);
            }
            else
            {
                string temp = to_string(i);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};