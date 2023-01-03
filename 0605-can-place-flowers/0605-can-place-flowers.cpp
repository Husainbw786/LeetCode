class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int len = flowerbed.size();
        int count = 0;
        int i;
        if(n==0)
        {
            return true;
        }
        else
        {
            if(flowerbed.size()==1)
            {
                if(flowerbed[0]==0)
                {
                    n--;
                    flowerbed[0]=1;
                    if(n==0)
                    {
                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        for(i=0;i<len;i++)
        {
            if(i == 0 || i == len-1)
            {
                if(i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
                else if(i == len-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
            {
                flowerbed[i]=1;
                n--;
            } 
            if(n == 0)
            {
                return true;
            }
        }
        
        return false;
    }
};