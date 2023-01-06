Just count the number of 1's bit in each of the following number and store it in the map.
After finishing the value of each number , just count the maximum of count stored in the map and return the answer.
​
For example for the given test case :
[16,17,71,62,12,24,14]
​
0 1 2 3 4 5 6 // Count of the ith bit
​
0 0 1 0 0 0 0 -->16
0 0 1 0 0 0 1 -->17
1 0 0 0 1 1 1 -->71
0 1 1 1 1 1 0 -->62
0 0 0 1 1 0 0 -->12
0 0 1 1 0 0 0 -->24
0 0 0 1 1 1 0 -->14
​
You can see the 2nd , 4th and 3rd bit have most number of 1's in their binary representation. Therefore , the number of 1's is 4 . So , we will return the answer as 4.