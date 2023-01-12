logic of left and right shift is that for eg
let left = 16, right = 19
16 = 10000        **100**
19 = 10011        **100** if same from left to right
here we can see that the common form the left side is 100 and 100 in both.
we will break the while loop here and do left shift the same time
we have done rightshift.
​
we can do the right shift everytime till left and right become equal
and count everytime you rightshift
after both left and right become equal
then left shift the number same time you did the right shift.
​
***************************************************************
10   =      1010 left
15   =      1111 right
1010 >> 1 = 101  101 >> 1 = 10    10 >> 1 = 1
1111 >> 1 = 111   111 >> 1 = 11   11 >> 1 = 1
count = 3
1 << 1 = 2
2 << 1 = 4
4 << 1 = 8
​
​
​
​
​
​
**********************************
left = 5  right = 7
101 >> right shift = 10 >> rightshift = 1 both are same
111 >> rightshift =  11 >> rightshift = 1
we did rightshift for 2 times so we will do leftshift for 2 times.
1 << 1 = 2
2 << 1 = 4
4 << 1 = 8
​