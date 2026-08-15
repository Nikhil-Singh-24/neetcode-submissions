class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0  ,  j = nums.size() - 1;
        int mx = INT_MAX ;
        while(i < j){
            int mid = i + (j-i) / 2 ;
            mx = min(mx,nums[mid]);
            if(nums[j] > nums[mid]){
                j = mid ;
            }
            else if(nums[j] < nums[mid]){
                i = mid + 1 ;
            }
        }
        mx = min(mx , nums[i]);
        mx = min(mx, nums[j]);
        return mx ;
    }
};
