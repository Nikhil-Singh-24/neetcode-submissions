class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m1;

        for(auto ins : nums){
            m1[ins]++;
        }
        vector<pair<int,int>> v1;

        for(auto in : m1){
            v1.push_back({in.second , in.first});
        }

        sort(v1.rbegin(),v1.rend());

        vector<int> v2;

        for(int i = 0 ; i< k ; i++){
            v2.push_back(v1[i].second);
        }

        return v2;
    }
};
