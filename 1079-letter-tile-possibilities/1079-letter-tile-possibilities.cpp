class Solution {
public:
    
    string temp = "";
    unordered_map<int,bool>mp;
    
    void solve(string tiles, set<string>&st)
    {
        for(int i=0;i<tiles.size();i++)
        {
            if(mp[i] == false)
            {
                temp += tiles[i];
                mp[i] = true;
                st.insert(temp);
                solve(tiles,st);
                mp[i] = false;
                temp.pop_back();
            }
        }
        
    }
    
    int numTilePossibilities(string tiles) {
        
        int count = 0;
        int n = tiles.size();
        set<string>st;
        solve(tiles , st);
        return st.size();
    }
};