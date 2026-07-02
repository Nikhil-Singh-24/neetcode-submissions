class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;        
        int res = 0;

        for (int i = 0; i < tokens.size(); i++) {
            string t = tokens[i];

            
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                
                int b = s1.top(); s1.pop();
                int a = s1.top(); s1.pop();

                
                if (t == "+") s1.push(a + b);
                else if (t == "-") s1.push(a - b);
                else if (t == "*") s1.push(a * b);
                else if (t == "/") s1.push(a / b);
            } else {
                
                int val = stoi(t);   
                s1.push(val);
            }
        }

        return s1.top();
    }
};
