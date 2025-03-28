class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i = 0 ; i < nums1.size();i++){
            int x =-1;
            int index = -1;
            for(int j = 0; j < nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    index = j+1;
                    break;
                }
            }
             if(index !=-1){
            for(int j = index ; j < nums2.size();j++){
                if(nums1[i]< nums2[j]){
                    x = nums2[j];
                    break;
                }
            }
        }
         v.push_back(x);
        }
       
        return v;
    }
};
