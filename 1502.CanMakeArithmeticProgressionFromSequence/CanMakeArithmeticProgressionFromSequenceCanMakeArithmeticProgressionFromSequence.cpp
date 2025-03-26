class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int>arr1 = arr;
        sort(arr1.begin(),arr1.end());
        int d = arr1[1]-arr1[0];
        for(int i = 2 ; i < arr1.size();i++){
            if(arr1[i]-arr1[i -1]!=d){
                return false;
            }
        }
        return true;
    }
};
