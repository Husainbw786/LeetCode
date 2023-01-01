class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
        int n = words.size();
        bool flag = false;
        for(int k=0;k<n;k++)
        {
            if(words[k] == target)
            {
                flag = true;
                break;
            }
        }
        if(words[startIndex] == target)
        {
            return 0;
        }
        int i = startIndex + 1;
        int j = startIndex - 1;
        int mini = INT_MAX;
        if(!flag)
        {
            return -1;
        }
        if(i == n)
        {
            i = 0;
        }
        int count1 = 1;
        while(i < n)
        {
            if(words[i] == target)
            {
               int ans = count1;
               mini = min(ans,mini); 
               break;
            }
            if(i == n-1)
            {
                i = -1;
            }
            i++;
            count1++;
        }
        if(j == -1)
        {
            j = n-1;
        }
        int count2 = 1;
        while(j >= 0)
        {
            if(words[j] == target)
            {
                int ans = count2;
                mini = min(ans,mini);
                break;
            }
            if(j == 0)
            {
                j = n;
            }
            j--;
            count2++;
        }
        return mini;
    }
};