class Solution {
public:
    string interpret(string command) {
        
        string ans = "";
        int i;
        int n = command.size();
        for(i=0;i<n;i++)
        {
            if(command[i] == '(' && command[i+1] == ')')
            {
                ans += 'o'; 
            }
           else if(command[i] == '(' && command[i+1] == 'a')
            {
                ans += 'a';
                ans += 'l';    
            }
            else if(command[i] == 'G')
            {
                ans += 'G';
            }
            
        }
        return ans;
    }
};