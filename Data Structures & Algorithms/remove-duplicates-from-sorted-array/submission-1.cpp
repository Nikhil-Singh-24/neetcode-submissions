class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v1;

        for(int i = 0 ; i < nums.size() -1 ; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            else{
                v1.push_back(nums[i]);
            }
        }
        v1.push_back(nums[nums.size() - 1]);
        for(int i = 0 ;i < v1.size() ; i++){
            nums[i] = v1[i];
        }

        return v1.size();
    }
};