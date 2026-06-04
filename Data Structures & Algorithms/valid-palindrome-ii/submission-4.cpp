class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0 , j = s.size()-1 ;

        while(i < j){
            if(s[i] != s[j]){
                return isPalindrome(s.substr(0,i) + s.substr(i+1)) || isPalindrome(s.substr(0,j) + s.substr(j+1));
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s){
        int  i = 0 , j = s.length()-1;
        while(i < j){
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};