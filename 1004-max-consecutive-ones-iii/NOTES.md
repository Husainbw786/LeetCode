the main logic behind this ques is that we will keep the count of zeroes.
if zerocount is greater than k we will move the i pointer.
for eg [1,1,1,0,0,0,1,1,1,1,0]
i = 0, j = 0;
we keep moving the j pointer and if zerocount > k then we will move the i pointer and if
nums[i] == 0 then we will decrease zerocount.
store theb max count by j-i+1 sliding window.
​