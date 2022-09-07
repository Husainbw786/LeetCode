class Solution {
public:
    
    int Square(int num)
    {
        return num*num;
    }
    
    vector<int> sortedSquares(vector<int>& nums) {
        
        int pos = -1;
        int neg = -1;
        int i;
        int len = nums.size() - 1;
        vector<int>v;
        for(i=0;i<=len;i++)
        {
            if(nums[i] >= 0)
            {
                pos = i;
                neg = pos - 1;
                break;
            }
        }
            if(pos == -1)
            {
                neg = len;
            }
            else
            {
                neg = pos-1;
            }
        
           
            while(neg >= 0 && pos <= len && pos != -1)
            {
                if(nums[pos] > abs(nums[neg]))
                {
                    v.push_back(Square(nums[neg]));
                    neg--;
                }
                else
                {
                    v.push_back(Square(nums[pos]));
                    pos++;
                }
            }
            while(pos <= len && pos != -1)
            {
             v.push_back(Square(nums[pos]));
                pos++;
            }
              while(neg >= 0)
            {
             v.push_back(Square(nums[neg]));
                  neg--;
            }
        
        return v;
    }
};