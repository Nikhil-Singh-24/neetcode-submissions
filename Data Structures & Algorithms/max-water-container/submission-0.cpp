class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , n = heights.size() , j = n-1;
        int mx = 0;

        while(i<j){
            int sum = 0;
            sum = min(heights[i] , heights[j]) * (j-i);

            mx = max(mx,sum);

            if(heights[i] > heights[j]){
                j--;
            }
            else if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return mx;
    }
};
