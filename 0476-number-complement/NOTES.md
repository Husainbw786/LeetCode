(in left shift the number increases)
​
for ex num = 8  (1000) , i=0
we will do & with one  1000
0001   so we get zero
1 <<  i so i = 0 then left shift ans will  be equal to 1
ans += 1;
i++
now right shift 8 (1000) so 8 >> 1 = 4 (100)
now agin same num & 1 so 4 & 1   100
001 ans = 0.
now i = 1;
ans += 1 >> i so 1 >> 1 = 2
ans += 2
ans = 3
num right shift  by 1 and i++;
after right shift 4 we get 2
100 >> 1 = 2 (10)
now again 2 & 1 = 10
01  we again get zero
ans += 1 << i value of i = 2
if(i = 2 then ans of left shift will be equal to 4)
ans += 4
i++;
and at last  right shift of 2 we get 1
2 >> 1 = 1;
1 & 1 != 0
ans = 7
​
​
​
​