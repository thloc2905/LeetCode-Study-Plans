class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>emptyelement;
        while( n > 0){
            emptyelement.push_back(n % 10);
            n = n/10;
        }
        int count = 0;
        for(int i = 0; i < emptyelement.size();i++){
            count +=emptyelement[i];
        }
        int element = 1;
        for(int i = 0; i < emptyelement.size();i++){
            element *=emptyelement[i];
        }
        return element - count;
    }
};
