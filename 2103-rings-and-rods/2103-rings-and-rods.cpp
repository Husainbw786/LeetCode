class Solution {
public:
    int countPoints(string rings) {
        vector<bool>blue(101,false);
        vector<bool>red(101,false);
        vector<bool>green(101,false);
        int n = rings.size();
        int i;
        for(i=0;i<n;i+=2)
        {
            if(rings[i] == 'R')
            {
                red[rings[i+1]] = true;
            }
            if(rings[i] == 'G')
            {
                green[rings[i+1]] = true;
            }
            if(rings[i] == 'B')
            {
                blue[rings[i+1]] = true;
            }
        }
        int ans = 0;
        for(i=0;i<101;i++)
        {
            if(red[i] && green[i] && blue[i])
            {
                ans++;
            }
        }
        return ans;
    }
};