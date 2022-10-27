class Solution {
public:
    int minPartitions(string n) {
        
        int len = n.size();
        int i;
        int max = 0;
        string temp;
        for(i=0;i<len;i++)
        {
            temp += n[i];
            int x = stoi(temp);
            if(max < x)
            {
                max = x;
                if(max == 9)
                {
                    break;
                }
            }
            temp.clear();
        }
        return max;
    }
};