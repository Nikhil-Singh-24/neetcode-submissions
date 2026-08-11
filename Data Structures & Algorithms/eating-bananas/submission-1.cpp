class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ; 
        int r  = *max_element(piles.begin(), piles.end());
        int mx = r;

        while(l <= r){
            int m = l + (r-l) / 2 ;

            long long totalhours = 0;

            for(auto p : piles){
                totalhours += (p+m-1) / m ;
            }

            if(totalhours <= h){
                mx = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return mx;
    }
};
