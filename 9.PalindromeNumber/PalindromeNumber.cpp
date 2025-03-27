class Solution {
    public:
        bool isPalindrome(int x) {
            if(x < 0){
                return false;
            }
            long long  count = 0;
            int temp = x;
            while(temp > 0){
                count = count * 10 + temp % 10;
                temp /= 10;
            }
            return count == x;
        }
    };
