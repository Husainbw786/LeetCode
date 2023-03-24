they will increase in this fashion.
​
so even though we have 2 nodes on each level but indexes for null nodes will also be counted,
as these are the left most and right most nodes. all the intermediate nodes indeces will
consumed even they are not present
​
so after 31 levels it will come upto 2^31 which will become greater than the value of INT_MAX
so we have to take long long but also after 2 ^ 63 the long long limit will also be reached
so we have to optimised the code in some way.
​
we are pushing one level and popping one level so we are working with 1 level at a time or we say
2 level at a time
so when iteration end all the nodes in the queue are of one level
so we are bothered about only 2 level at a time.
​
from 3 to 6
we know the first index is 3 here and last index is 6
so does it matter if the index is from 3 - 6 or 0 - 3
​
from 7 to 14
the index which is 7 - 14 can be represednted as 0 - 7
so we see the diff is 7 in both the case.
​
so in all levels it will propogate like that
​
so once we will done with the level we will reset it and we will take first index as 0 always.
so if it started from 33 to 64
so it will become 0 and frome 64 we will subtract 33
​
so from 0 to 31
​
so that's why we are doing this ( int idx = p.second - start) to prevent the overflow.
​
Hope Everything is clear now.