class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total_sum = accumulate(cardPoints.begin(),cardPoints.end(),0);
        int window_sum = 0;
        for(int i=0;i<n-k;i++){
            window_sum += cardPoints[i];
        }
        int left = 0;
        int right = n-k;
        int max_points = total_sum-window_sum;
        while(n>right){
            window_sum += cardPoints[right];
            window_sum -= cardPoints[left];
            max_points = max(max_points,total_sum-window_sum);
            right ++;
            left ++;
        }
        return max_points;
    }
};