class Solution {
public:
    
    int histogram(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<pair<int, int>> st;

        for (int i = n - 1; i >= 0; i--) 
        {
            while (!st.empty() && st.top().first >= heights[i])
                st.pop();
            if (st.empty())
                right[i] = n - 1;
            else
                right[i] = st.top().second - 1;
            st.push({heights[i], i});
        }

        st = {};
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top().first >= heights[i])
                st.pop();
            if (st.empty())
                left[i] = 0;
            else
                left[i] = st.top().second + 1;
            st.push({heights[i], i});
        }

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
            maxi = max(heights[i] * (right[i] - left[i] + 1), maxi);

        return maxi;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        int maxi = 0;
        vector<int>heights(m,0);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j] == '1')
                {
                    heights[j]++;
                }
                else
                {
                    heights[j] = 0;
                }
            }
            int area = histogram(heights);
            maxi = max(area,maxi);
        }
        return maxi;
    }
};