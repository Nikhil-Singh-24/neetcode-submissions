class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;

        for(auto num : nums){
            m1[num]++;
        }
        int n = nums.size();

        vector<int> v1;

        for(auto ins : m1){
            if(ins.second > (n/3)){
                v1.push_back(ins.first);
            }
        }
        return v1;
    }
};