we can use sliding window approach. we will use two pointer i and j.
we will use a zerocount vairaible to count zero and if zerocount is greater then one then we will start moving pointer until the count zero again become equal to one and every time we will store max length by j-i+1.