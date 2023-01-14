the main logic behind the flip is we will check the or of a and b with c
for eg a = 5 , b  = 4, c = 8;
and we will use a count vairiable to count the flips.
now we have to do minium flips to make a or b equal to c
so we will match the bits of a or b with c
a = 5 = 0101
b = 4 = 0100
c = 8 = 1000
now we will comapre the last bit of a or b with c
here last bit of a = 1 and b = 0 1 1 or 0 = 1.
now we will compare 1 with last bit of c which is equal to 0
1 != 0 so we have to flip here so count++.
now we will do a b c right shidt by one to compare the next bits.
a >> 1 = 0101 >> 1 = 010
b >> 1 = 0100 >> 1 = 010
c >> 1 = 1000  >> 1 = 100
simiarly compare evertime till the 1 bits is check and increase the count if flip needed.
​
​
​
​