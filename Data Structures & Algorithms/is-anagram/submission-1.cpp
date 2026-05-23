class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        if(s.size() != t.size()) return false;

        for(int i = 0 ; i < s.size() ; i++ ){
            m1[s[i]]++;
            m1[t[i]]--;
        }

        for(auto p : m1){
            if(p.second != 0){
                return false;
            }
        }
        return true;
    }
};
