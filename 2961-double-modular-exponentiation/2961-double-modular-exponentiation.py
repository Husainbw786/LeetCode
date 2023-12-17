class Solution:
    def getGoodIndices(self, variables: List[List[int]], target: int) -> List[int]:
        
        ans = []
        
        for i in range(0,len(variables)):
            a = pow(variables[i][0],variables[i][1]) % 10
            b = pow(a,variables[i][2])
            c = b % variables[i][3];
            if c == target:
                ans.append(i)
        return ans