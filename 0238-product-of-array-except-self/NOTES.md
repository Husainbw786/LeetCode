the main logic behind this question is that
we will use two vector of size n (left), (right)
int the left vector we will store all left left commultive product
ex [1,2,3,4]
left :-> [1,2,6,24]
right :-> [4, 12, 24, 24] = [24, 24 ,12, 4].  reverse it beacuse we will store from right.
​
now ans vector will be
ans [0] =  right[1] = 24.
ans[1] =   left[0]*right[2]  = 12.
ans[2] =   left[1]*right[3] = 8.
ans[3] = left[n-2] = 6.
​