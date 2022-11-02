class Solution {
	public:
		int numDifferentIntegers(string word) {
			
            int j;
            unordered_set<string>set;

            for(int i=0;i<word.size();i++)
            {
            int j=i;
            string temp;
                while(isdigit(word[j]))
                {

                     temp += word[j];
                     j++;

                }
                if(temp.size()!=0)
                {
                    if(temp == "0") 
                    {
                        set.insert(temp);
                    }
                    else if(temp[0]=='0')
                    {
                        continue;
                    }
                    else
                    {
                        set.insert(temp);
                    }

                }
            i=j;

        }
    
       return set.size();
    }
};