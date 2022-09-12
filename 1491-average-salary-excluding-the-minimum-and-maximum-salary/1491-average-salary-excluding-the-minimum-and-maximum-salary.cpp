class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(),salary.end());
        int count = 0;
        double sum = 0;
        int n = salary.size();
        for(int i = 1;i<n-1;i++)
        {
            sum = sum + salary[i];
            count++;
        }
        double ans = sum / count;
        return ans;
    }
};