class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;
        int n = nums.size();
        for(auto cs : nums){
            m1[cs]++;
        }

        for(auto ys : m1){
            if(ys.second > (n/2)){
                return ys.first;
            }
        }
        
    }
};