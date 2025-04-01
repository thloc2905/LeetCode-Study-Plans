class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string check;
        int i = 0, j = 0;
        while (i < word1.length() && j < word2.length()) {
            check += word1[i];
            i++;
            check += word2[j];
            j++;
        }
        while (i < word1.length()) {
            check += word1[i];
            i++;
        }
        while (j < word2.length()) {
            check += word2[j];
            j++;
        }
        
        return check;
    }
};
