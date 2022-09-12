class Solution {
public:
    
void CheckFill(int i,int j, vector<vector<int>>& image, vector<vector<bool>>&vis, int color,int old_color)
{
    if(i < 0 || j < 0 || i >= image.size() || j >= image[0].size())
    {
        return;
    }
    if(image[i][j] != old_color || vis[i][j] == true)
    {
        return;
    }
    vis[i][j] = true;
    image[i][j] = color;
    CheckFill(i+1,j,image,vis,color,old_color);
    CheckFill(i-1,j,image,vis,color,old_color);
    CheckFill(i,j+1,image,vis,color,old_color);
    CheckFill(i,j-1,image,vis,color,old_color);
}
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size();
        int m = image[0].size();
        int old_color = image[sr][sc];
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        CheckFill(sr,sc,image,vis,color,old_color);
        return image;
        
    }
};