class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
      int i,j;
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            int first = arr1[i];
            bool flag = false;
            for(j=0;j<m;j++)
            {
                int second = arr2[j];
                if(abs(first - second) <= d)
                {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
            {
                count++;
            }
        }
        return count;
        
    }
};