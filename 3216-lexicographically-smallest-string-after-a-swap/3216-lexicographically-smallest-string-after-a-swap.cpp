class Solution {
public:
    string getSmallestString(string s) {
     
        int n = s.size();
        int i;
        for(i = 0; i < n - 1; i++) {
            int current_char = s[i] - 'a';
            int next_char = s[i+1] - 'a';
            if(current_char > next_char)
            {
                if((current_char % 2 == next_char % 2) && (current_char > next_char))
                {
                    swap(s[i], s[i+1]);
                    break;
                }
            }
            
        }
        return s;
    }
};
