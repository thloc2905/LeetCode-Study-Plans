class Solution {
public:
    string freqAlphabets(string s) {
        string result ="";
        int i =0;
        while(i < s.length()){
            if(i +2 <s.length() && s[i +2] == '#' ){
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                result +=char(num + 'a' - 1);
                i+=3;
            }else{
                result += char(s[i] - '0' + 'a' - 1);
                i++;
            }
        }
        return result;
   }
};
