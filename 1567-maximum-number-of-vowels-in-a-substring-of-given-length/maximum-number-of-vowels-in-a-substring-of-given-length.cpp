class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
        else return false;
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