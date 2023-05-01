class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        int n = A.size();
        unordered_map<int,int>mp1,mp2;
        int i;
        vector<int>v;
        if(A[0] == B[0])
        {
            v.push_back(1);
            mp1[A[0]]++;
            mp2[B[0]]++;
        }
        else
        {
            v.push_back(0);
            mp1[A[0]]++;
            mp2[B[0]]++;
        }
        for(i=1;i<n;i++)
        {
            int ans = 0;
            if(A[i] == B[i])
            {
                v.push_back(1 + v[i-1]);
                mp1[A[i]]++;
                mp2[B[i]]++;
            }
            else
            {
                if(mp1.find(B[i]) != mp1.end())
                {
                    ans++;
                }
                if(mp2.find(A[i]) != mp2.end())
                {
                    ans++;
                }
                v.push_back(ans+v[i-1]);
                mp1[A[i]]++;
                mp2[B[i]]++; 
            }
        }
        return v;
    }
};