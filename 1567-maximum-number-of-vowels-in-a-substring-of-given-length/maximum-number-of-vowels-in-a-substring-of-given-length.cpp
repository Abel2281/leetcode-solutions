class Solution {
public:
    bool isVowel(char ch) {
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
    }
    
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0; i<k; i++){
            if(isVowel(s[i])) count++;
        }
        int max_count = count;
        for(int i=k; i<s.size(); i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;
            max_count = max(max_count,count);
        }
        return max_count;
    }
};