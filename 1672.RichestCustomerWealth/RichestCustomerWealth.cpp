class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_val = 0;
        for(auto &account: accounts){
            int sum =0;
            for(int money : account){
                sum += money;
            }
             max_val = max(max_val,sum);
        }
       return max_val;
    }
};
