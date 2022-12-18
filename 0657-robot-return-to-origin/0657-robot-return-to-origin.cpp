class Solution {
public:
    bool judgeCircle(string moves) {
        
        int up_down = 0;
        int right_left = 0;
        
        int i;
        int n = moves.size();
        for(i=0;i<n;i++)
        {
            if(moves[i] == 'U')
            {
                up_down++;
            }
            else if(moves[i] == 'R')
            {
                right_left++;
            }
            else if(moves[i] == 'L')
            {
                right_left--;
            }
            else if(moves[i] == 'D')
            {
                up_down--;
            }
        }
        if(up_down == 0 && right_left == 0)
        {
            return true;
        }
        return false;
    }
};