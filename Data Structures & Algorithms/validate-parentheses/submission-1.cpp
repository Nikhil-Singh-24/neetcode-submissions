class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // For closing brackets, check if matches top
            else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    return false;
                }
                st.pop();
            }
            else if (c == '}') {
                if (st.empty() || st.top() != '{') {
                    return false;
                }
                st.pop();
            }
            else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }

        // Stack must be empty for valid parentheses
        return st.empty();
    }
};