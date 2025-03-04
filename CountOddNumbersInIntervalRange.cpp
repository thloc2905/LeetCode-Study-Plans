#include<iostream>
using namespace std;

class Solution {
    public:
        int countOdds(int low, int high) {
            int count = 0;
            for(int i = low ; i <= high ;i++){//duyệt qua từng phần tử từ low -> highhigh
                if( i % 2 != 0){//phần từ này duyệt số lẽ 
                    count++;
                }
            }
            return count;
        }
    };