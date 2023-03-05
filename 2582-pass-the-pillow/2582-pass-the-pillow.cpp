class Solution {
public:
    int passThePillow(int n, int time) {
        
        
       bool back = false;
       int index = 1;
        while(time--)
        {
            if(index == n)
            {
                back = true;
            }
            if(index == 1)
            {
                back = false;
            }
            if(back)
            {
                index--;
            }
            else
            {
                index++;
            }
        }
            return index;
    }
};