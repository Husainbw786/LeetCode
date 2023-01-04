class Solution {
public:
int wateringPlants(vector<int>& plants, int capacity) {
int steps=0,can=capacity;
for(int i=0;i<plants.size();i++)
{
if(plants[i]<=can){
steps++;
can-=plants[i];
}
else{
steps+=(i);
steps+=(i+1);
can=capacity-plants[i];
}
}
return steps;
}
};