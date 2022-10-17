class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int i = 0;
        int j = 0;
        int n = name.size();
        int m = typed.size();
        while(i < n || j < m)
        {
            char current = name[i];
            if(name[i] != typed[j])
            {
                return false;
            }
            i++;
            j++;
            if(name[i] != typed[j])
            {
                while(current == typed[j])
                {
                    j++;
                }
            }
        }
        return true;
    }
};