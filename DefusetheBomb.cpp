#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> decrypt(vector<int>& code, int k) {
            int n = code.size();
            vector<int>resul(n,0);
            if( k == 0){
                return resul;
            }
            for(int i = 0 ; i< n;i++){
                int count =0;
                for(int j = 1; j <= abs(k);j++){
                    if( k >0){
                        count +=code[(i + j)%n];
                    }else{
                        count+= code[(i-j+n)%n];
                    }
                }
                resul[i]=count;
            }
            return resul;
        }
    };