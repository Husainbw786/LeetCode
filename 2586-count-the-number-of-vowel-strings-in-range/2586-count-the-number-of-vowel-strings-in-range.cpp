class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        
         int n = words.size();
         int i;
        int count = 0;
        for(i=left;i<=right;i++)
        {
            string temp = words[i];
            int len = temp.size();
            bool flag1 = false;
            bool flag2 = false;
                char start = temp[0];
                char end = temp[len-1];
                if(start == 'a' || start == 'e' ||  start == 'i' ||  start == 'o' ||  start == 'u' )
                {
                    flag1 = true;
                }
                if(end == 'a' || end == 'e' ||  end == 'i' ||  end == 'o' ||  end == 'u' )
                {
                    flag2 = true;
                }
            if(flag1 && flag2)
            {
                count++;
            }
            
        }
        return count;
    }
};