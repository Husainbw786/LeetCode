class Solution {
public:
char nextGreatestLetter(vector<char>& l, char t) {
int left=0, right = l.size()-1;
char ans = ' ';
while(left <= right){
int mid = left + (right-left)/2;
if(l[mid] > t){
ans = l[mid];
right = mid-1;
}
else{
left = mid+1;
}
}
if(ans==' ')
return l[0];
return ans;
}
};