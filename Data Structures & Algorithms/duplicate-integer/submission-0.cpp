class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> h1;

        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            h1.insert(nums[i]);
        }
        int m = h1.size();

        if(n == m){
            return false;
        }
        else{
            return true;
        }
    }
};