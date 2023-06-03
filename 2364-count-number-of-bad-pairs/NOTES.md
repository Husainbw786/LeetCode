Intution :
count the total number of good pairs in the array.
to count good pairs calculate the differnce nums[i] - i.and store in a map.
if map has that element present  the udpate it counter otherwise add that pair difference in the array.
now to calculate bad  pair return total pair- good pair
to calculate all pairs formula n(n-1)/2;
​
​