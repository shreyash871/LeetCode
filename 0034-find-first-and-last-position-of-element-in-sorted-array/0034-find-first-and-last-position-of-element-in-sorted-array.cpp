class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();

        // STEP 1: Find Lower Bound
        // First index where nums[i] >= target
        int low = 0;
        int high = n - 1;
        int first = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                first = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // Target does not exist
        if (first == n || nums[first] != target) {
            return {-1, -1};
        }

        // STEP 2: Find Upper Bound
        // First index where nums[i] > target
        low = 0;
        high = n - 1;
        int upper = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                upper = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // STEP 3: Last occurrence = Upper Bound - 1
        int last = upper - 1;

        return {first, last};
    }
};