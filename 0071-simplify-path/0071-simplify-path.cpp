class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st ;
        string res ;
        for(int i = 0 ;i<path.size() ;i++)
        {
            if(path[i]=='/') 
            {
                continue ;
            }
            string temp ;

            while(i<path.size() && path[i]!='/')
            {

                temp += path[i];
                i++;
            } 
            if(temp ==".")
            {
                continue ;
            }
            else if(temp == "..")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }   
            else
            {
                st.push(temp) ;        
            }        
        }
        stack<string>t;
        while(!st.empty())
        {
            t.push(st.top());
            st.pop();
        }
        while(!t.empty())
        {
            res += "/"+ t.top();
            t.pop();
        }
        if(res.size()==0) return  "/";

        return res ;
    }
};