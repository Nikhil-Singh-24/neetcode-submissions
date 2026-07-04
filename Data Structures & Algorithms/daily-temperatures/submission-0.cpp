class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v1(temperatures.size() , 0);
        stack<pair<int,int>> s1;

        for(int i = 0 ; i< temperatures.size() ; i++){
            int x = temperatures[i];

            while(!s1.empty() && x > s1.top().first){
                auto y = s1.top();
                s1.pop();
                v1[y.second] = i - y.second;
            }

            s1.push({x,i});
        }

        return v1;
    }
};
