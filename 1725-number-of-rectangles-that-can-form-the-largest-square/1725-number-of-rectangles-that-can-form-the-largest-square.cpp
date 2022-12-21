class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int n = rectangles.size();
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
             int x = min(rectangles[i][0],rectangles[i][1]);
             v.push_back(x);
            cout << x << " ";
        }
        n = v.size();
        sort(v.begin(),v.end());
        int ans = 1;
        for(i=n-1;i>0;i--)
        {
            if(v[i] == v[i-1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
       
       return ans;
    }
};