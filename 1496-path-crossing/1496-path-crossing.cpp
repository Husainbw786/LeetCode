class Solution {
public:
    bool isPathCrossing(string path) {
        
        set<pair<int,int>>st;
        
        int x = 0;
        int y = 0;
        st.insert({0,0});
        for(auto i : path)
        {
            if(i == 'N')
            {
                x++;
            }
            else if(i == 'S')
            {
                x--;
            }
            else if(i == 'E')
            {
                y++;
            }
            else
            {
                y--;
            }
            if(st.find({x,y}) == st.end())
            {
                st.insert({x,y});
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};