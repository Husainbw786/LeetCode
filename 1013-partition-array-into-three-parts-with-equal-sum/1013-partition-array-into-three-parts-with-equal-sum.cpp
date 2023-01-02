class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
     
        int n = arr.size();
        int i;
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += arr[i];
        }
        if(sum % 3 != 0)
        {
            return false;
        }
        int currsum = 0;
        int x = sum / 3;
        int count = 0;
        for(i=0;i<n;i++)
        {
            currsum += arr[i];
            if(currsum == x)
            {
                count++;
                currsum = 0;
            }
        }
        if(count >= 3)
        {
            return true;
        }
        return false;
        
    }
};