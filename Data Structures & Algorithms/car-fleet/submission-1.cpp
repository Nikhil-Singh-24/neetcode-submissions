class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v1;
        for(int i = 0 ; i < position.size() ; i++){
            v1.push_back({position[i] , speed[i]});
        }

        sort(v1.rbegin() , v1.rend());

        vector<double> stack;
        for(auto p : v1){
            stack.push_back((double)(target - p.first)/p.second);
            if(stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
