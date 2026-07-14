class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 , right = nums.size() - 1 ;

        return binary(nums, left , right , target);

        
    }

    int binary(vector<int>&nums , int  l , int r , int target){

        if (l > r) return -1;
        
        int mid = l + (r-l) /2;

        if(target == nums[mid]){
            return mid;
        }
        else if(target > nums[mid]){
            return binary(nums , mid+1 , r , target);
        }
        else if(target < nums[mid]){
            return binary(nums , l , mid-1 , target);
        }
    }
};
