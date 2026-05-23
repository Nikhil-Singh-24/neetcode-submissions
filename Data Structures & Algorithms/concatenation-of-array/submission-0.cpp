class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int a = 0;
        int n = nums.size();

        for(int i = 0; i< 2*n ; i++){
            if(i == n){
                a = 0;
            }

            ans.push_back(nums[a]);
            a++;
        }
        return ans; 
    }
};