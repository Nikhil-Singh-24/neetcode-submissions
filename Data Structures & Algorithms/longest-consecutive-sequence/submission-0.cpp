class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> h1;

        for(auto ins : nums){
            h1.insert(ins);
        }
        int longest = 0;

        for(auto in : h1){
            if(h1.find(in-1) == h1.end()){
                int length = 1;
                while(h1.find(in+length) != h1.end()){
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};
