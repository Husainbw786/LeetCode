class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int n = tokens.size();
        
        stack<long long>st;
        for(int i=0;i<n;i++)
        { 
           if(tokens[i] == "+")
           {
                  int first = st.top();
                  st.pop();
                  int second = st.top();
                  st.pop();
                  int sum = second + first;
                  st.push(sum);
           }
            else if(tokens[i] == "-")
            {
                  int first = st.top();
                  st.pop();
                  int second = st.top();
                  st.pop();
                  int sub = second - first;  
                  st.push(sub);
            }
            else if(tokens[i] == "*")
            {
                  long long first = st.top();
                  st.pop();
                  long long second = st.top();
                  st.pop();
                  long long mul = second * first;
                  st.push(mul);
            }
            else if(tokens[i] == "/")
            {
                  long long first = st.top();
                  st.pop();
                  long long second = st.top();
                  st.pop();
                  long long div = second / first;
                  st.push(div);
            }
            else
            {
                int x = stoi(tokens[i]);
                st.push(x);
            }
            
        }
        return st.top();
    }
};