class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        int i = 0 ;
        int n = strs.size();

        while( i < n ){
            string original = strs[i] ;
            string word = original;
            sort(word.begin() , word.end());
            mp[word].push_back(original);
            i++;
        }
        vector<vector<string>> ans;
        for( auto& pair : mp){
            ans.push_back(pair.second);
        }
        return ans ;
    }
};
