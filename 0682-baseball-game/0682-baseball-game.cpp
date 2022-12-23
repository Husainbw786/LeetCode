class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int>v;
        int i;
        int n = operations.size();
        int sum = 0;
        for(i=0;i<n;i++)
        {
            if(operations[i] == "+")
            {
                int x = 0;
                int m = v.size();
                x = v[m-1] + v[m-2];
                v.push_back(x);
            }
            else if(operations[i] == "D")
            {
                int m = v.size();
                int y = (v[m-1] + v[m-1]);
                v.push_back(y);
            }
            else if(operations[i] == "C")
            {
                v.pop_back();
            }
            else
            {
                v.push_back(stoi(operations[i]));
            }
        }
        for(i=0;i<v.size();i++)
        {
            sum += v[i];
        }
        return sum;
    }
};