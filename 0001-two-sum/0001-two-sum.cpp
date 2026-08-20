class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int current = nums[i];
            int nedded = target - current;
            if (mp.find(nedded) != mp.end()) {
                return {mp[nedded], i};
            }
            mp[current] = i;
        }
        return {};
    };
};
