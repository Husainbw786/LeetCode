class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result = 0;
        int i;
        for(i=0;i<columnTitle.size();i++)
        {
            result = result*26;
            result = result + (columnTitle[i] - 'A' + 1);
        }
        return result;
    }
};