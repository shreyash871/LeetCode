class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false ;
        }
        unordered_map<char , int> freq;
        int n = s.length();
        int i = 0;
        
        while (i < n){
            freq[s[i]]++;
            freq[t[i]]--;
            i++;
        }
        for( auto& pair : freq){
            if (pair.second != 0){
                return false;
            }
        }
        return true;
    }
};