class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
          
           unordered_map<int,int>mp;
           int n = candyType.size();
           int i;
           for(i=0;i<n;i++)
           {
               mp[candyType[i]]++;
           }
          int eat = n/2;
          if(mp.size() < eat)
          {
              return mp.size();
          }
        return eat;
    }
};