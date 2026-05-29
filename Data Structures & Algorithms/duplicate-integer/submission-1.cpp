class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m1;

        for(auto num : nums){
            m1[num]++;
        }
        for(auto fin : m1){
            if(fin.second > 1){
                return true;
            }
        }
        return false;
    }
};