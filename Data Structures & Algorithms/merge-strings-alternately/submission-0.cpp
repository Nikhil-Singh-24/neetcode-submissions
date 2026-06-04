class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";

        int n = word1.length();
        int m = word2.length();
        int a = min(n, m);

        for(int i = 0 ; i < a ; i++){
            result += word1[i];
            result += word2[i];
        }

        result += word1.substr(a);
        result += word2.substr(a);

        return result;
    }
};