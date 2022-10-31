class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string>ans;
        int i;
        int n = words.size();
        unordered_set  dict1 = { 'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P' };
		unordered_set  dict2 = { 'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
		unordered_set  dict3 = { 'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};

        for(i=0;i<n;i++)
        {
            string temp = words[i];
            bool flag1 = false;
            bool flag2 = false;
            bool flag3 = false;
            for(int j=0;j<temp.size();j++)
            {
                if(dict1.find(temp[j]) != dict1.end() )
                {
                    flag1 = true;
                }
                else if(dict2.find(temp[j]) != dict2.end() )
                {
                    flag2 = true;
                }
                else
                {
                    flag3 = true;
                }
            }
            if((flag1 && flag2) || (flag3 && flag2) || (flag1 && flag3))
            {
                continue;
            }
            else
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};