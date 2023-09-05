class Solution {
public:
    int divisorSubstrings(int num, int k) {
     
        string x = to_string(num);
        
        int i = 0;
        int j = 0;
        string temp = "";
        int count = 0;
        while(j<x.size())
        {
            temp += x[j];   
            if(j-i+1 == k)
            {
                int a = stoi(x.substr(i,j-i+1));
                if(a != 0)
                {
                  if(num % a == 0)
                    {
                        count++;
                    }  
                }
                
            }
            else if(j-i+1 > k)
            {
                while(j-i+1 > k)
                {
                    i++;
                }
                int a = stoi(x.substr(i,j-i+1));
                if(a != 0)
                {
                   if(num % a == 0)
                    {
                        count++;
                    } 
                }
                
            }
            
            j++;
        }
        return count;
    }
};