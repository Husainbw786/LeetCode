class Solution {
public:
    int minMaxDifference(int num) {
     
        vector<int>v,v1;
        while(num)
        {
            int rem = num % 10;
            v.push_back(rem);
            v1.push_back(rem);
            num = num / 10; 
        }
        reverse(v.begin(),v.end());
        reverse(v1.begin(),v1.end());
        int x = 0;
        int n = v.size();
        while(x < n && v[x] == 9)
        {
            x++;
        }
        int y = 0;
        if(x < n)
        {
           y = v[x];  
        }
        long long int maxi = 0;
        long long int mini = 0;
        int z = v1[0];
        int i;
        for(i=0;i<v.size();i++)
        {
             if(v[i] == y)
             {
                 v[i] = 9;
             }
            maxi = maxi*10 + v[i];
           
        }
        for(i=0;i<v.size();i++)
        {
            if(v1[i] == z)
            {
                v1[i] = 0;
            }
            mini = mini*10 + v1[i];
            // cout << mini << " ";
        }
    return maxi-mini;
          
    }
};