class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int>dq;
        int n = students.size();
        
        for(int i=0;i<n;i++)
        {
            dq.push_back(students[i]);
        }
        int i=0,k=0;
        
        while(dq.size()!=0 && k!=dq.size())
        {
            if(dq.front()!=sandwiches[i])
            {
                dq.push_back(dq.front());
                k++;
            }
            else
            {
                k=0;
                i++;
            }
            dq.pop_front();
        }
        return dq.size();
    }
};