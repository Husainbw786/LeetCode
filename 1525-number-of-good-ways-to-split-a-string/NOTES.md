class Solution {
public:
int numSplits(string s) {
map<char,int> m1,m2;
for(int i=1;i<s.size();i++){
m2[s[i]]++;
}
m1[s[0]]++;
int ans=(m1.size()==m2.size());
for(int i=1;i<s.size();i++){
m1[s[i]]++;
m2[s[i]]--;
if(m2[s[i]]==0) m2.erase(s[i]);
ans+=(m1.size()==m2.size());
}
return ans;
}
};