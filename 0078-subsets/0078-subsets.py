class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = []
        temp = []
       
        def solve(idx,nums):
            if idx == len(nums):
                ans.append(temp[:])
                return 
            temp.append(nums[idx])
            solve(idx+1,nums)
            temp.pop()
            solve(idx+1,nums)
        
        
        solve(0,nums)
        return ans
        