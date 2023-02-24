long long c=0; //to store the count the number divisible by 60
for(int i=0; i<t.size(); i++){if(t[i]%60==0)c++; t[i]%=60;}
map<int, int> mp;
int ans=0;
for(int i=0; i<t.size(); i++){
if(mp.find(60-t[i])!=mp.end())ans+=mp[60-t[i]];
mp[t[i]]++;
}
return ans+ (c*(c-1))/2;