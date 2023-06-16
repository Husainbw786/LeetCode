class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) {
        
        
        int n = hand.size();
          int i;
          if(n % groupSize)
          {
              return false;
          }
          map<int,int>mp;
          priority_queue<int,vector<int>,greater<int>>pq;
          for(i=0;i<n;i++)
          {
              mp[hand[i]]++;
          }
          for(auto x : mp)
          {
              pq.push(x.first);
          }
          
          while(!pq.empty())
          {
              int start = pq.top();
              
              for(i=start;i<start+groupSize;i++)
              {
                  if(mp.find(i) == mp.end())
                  {
                      return false;
                  }
                  mp[i]--;
                  if(mp[i] == 0)
                  { 
                     pq.pop();
                  }
              }
          }
          return true;
        
    }
};