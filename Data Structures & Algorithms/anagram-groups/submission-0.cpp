class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> s1;

        for(auto s : strs){
            vector<int> count(26,0);

            for(auto c : s ){
                count[c - 'a'] ++;
            }
            string key = to_string(count[0]);
            for(int i = 1 ; i < 26 ; ++i){
                key += ',' + to_string(count[i]);
            }

            s1[key].push_back(s);
        }
        vector<vector<string>> v2 ;

        for(auto oi : s1){
            v2.push_back(oi.second);
        }

        return v2;
    }
};
