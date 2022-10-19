class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
       vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int i;
        unordered_set<string>st;
        
        int n = words.size();
        for( auto x : words)
        {
            string ans = "";
            for(auto y : x)
            {
                ans += morse_code[y - 'a'];
            }
            st.insert(ans);
        }
        return st.size();
    }
};