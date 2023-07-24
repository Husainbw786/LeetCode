class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        int n = wordList.size();
        int i;
        unordered_set<string>st; 
        for(i=0;i<n;i++)
        {
            st.insert(wordList[i]);
        }
        st.erase(beginWord);
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty())
        {
            string word = q.front().first;
            int step = q.front().second;
            q.pop();
            if(word == endWord)
            {
                return step;
            }
            for(i=0;i<word.size();i++)
            {
                char org = word[i];
                for(char ch = 'a';ch<='z';ch++)
                {
                    word[i] = ch;
                    if(st.find(word) != st.end())
                    {
                        st.erase(word);
                        q.push({word,step+1});
                    }
                    
                }
                word[i] = org;
            }
            
        }
        return 0;
        
    }
};