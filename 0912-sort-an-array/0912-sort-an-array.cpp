class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     
    sort(nums.begin(),nums.end());
        return nums;
    }
};



  // BUBBLE SORT 
        /*
        int i,j;
        int n = nums.size();
        for(i=0;i<n-1;i++)
        {
            bool flag = false;
            for(j=0;j<n-i-1;j++)
            {
                if(nums[j] > nums[j+1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    flag = true;
                }
            }
            if(flag == false)
            {
                break;
            }
        }
        return nums;
      */  
/**************************************************************
  // selection sort
      /*  
        int i,j;
        int n = nums.size();
        for(i=0;i<n-1;i++)
        {
            int select = i;
            for(j=i+1;j<n;j++)
            {
                if(nums[select] > nums[j])
                {
                    select = j;
                }
            }
            swap(nums[i],nums[select]);
        }
        return nums;
     */