class Solution {
public:
    int hammingWeight(int n) {
        vector<int>binary;
        while( n > 0){
            binary.push_back(n % 2);//lưu 1 và 0 vào vector
            n = n/2;//chia n cho 2 để tiếp tục 
        }
        int count =0;
        for(int i = binary.size()-1;i >=0;i--){
            count += binary[i];
        }
        return count;
    }
};
