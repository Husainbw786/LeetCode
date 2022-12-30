class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int n = distance.size();
        if(start > destination)
        {
            int x = start;
            start = destination;
            destination = x;
        }
        int i = start;
        int ans1 = 0;
        int ans2 = 0;
        int total_distance = 0;
        int mini = INT_MIN;
        for(i=0;i<n;i++)
        {
            total_distance += distance[i];
        }
        i = start;
        while(i < destination)
        {
            ans1 += distance[i];
            i++;
        }
        ans2 = total_distance - ans1;
        mini = min(ans1,ans2);
        return mini;
    }
};