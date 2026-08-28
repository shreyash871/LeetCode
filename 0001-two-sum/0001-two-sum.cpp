class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int i = 0 ;
        while(i < n ){
            int current = nums[i];
            int needed = target - current;
            if ( mp.find(needed) != mp.end()){
                return{ mp[needed], i };
            }else{
                mp[current] = i ;
            }
            i++;
        }
        return{};
    };
};
