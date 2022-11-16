class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int i;
        int n = nums.size();
        vector<int>temp;
        
        temp = nums;
        nums.clear();
        while(temp.size() > 1)
        {
            for(int i=0;i<temp.size()-1;i++)
            {
                nums.push_back((temp[i] + temp[i+1]) % 10);
            }
            temp = nums;
            nums.clear();
        }
        return temp[0];
    }
};