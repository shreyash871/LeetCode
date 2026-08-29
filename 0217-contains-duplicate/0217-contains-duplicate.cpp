class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         int n = nums.size();
      unordered_set<int> seen;
      int i = 0 ;
      while( i < n ){
        if(seen.find(nums[i]) != seen.end() ){
          return true;
        }else{
          seen.insert(nums[i]);

        }
        i++;
      }
      return false;

    }
};