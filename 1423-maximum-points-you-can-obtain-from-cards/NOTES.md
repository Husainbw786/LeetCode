class Solution {
public:
int maxScore(vector<int>& cardPoints, int k) {
int n = cardPoints.size();
int left_sum = 0;
for (int i=0; i<k; i++) left_sum += cardPoints[i];
int ans = left_sum, sum = left_sum;
int left = k-1;
for (int right=n-1; right>=n-k; right--) {
sum -= cardPoints[left];
left--;
sum += cardPoints[right];
ans = max(ans, sum);
}
return ans;
}
};