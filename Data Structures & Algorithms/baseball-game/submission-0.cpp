class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s1 ;
        int sum = 0 ;

        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i] == "+"){
                int n1 = s1.top();
                s1.pop();
                int n2 = s1.top() + n1;
                s1.push(n1);
                s1.push(n2);
                sum += n2;
            }
            else if(operations[i] == "D"){
                s1.push(s1.top()*2);
                sum += s1.top();
            }
            else if(operations[i] == "C"){
                sum -= s1.top();
                s1.pop();
            }
            else{
                s1.push(stoi(operations[i]));
                sum+= s1.top();
            }
        }
        return sum;
    }
};