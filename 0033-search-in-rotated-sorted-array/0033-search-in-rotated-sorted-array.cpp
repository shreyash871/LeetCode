class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Case 1: Target found
            if (nums[mid] == target ) {
                return mid;
            }

            // Case 2: Left half is sorted
            if (nums[low] <= nums[mid]) {

                // Is target inside the sorted left half?
                if (target >= nums[low] && target <= nums[mid]) {
                    // Search left
                    high = mid - 1;
                }
                else {
                    // Search right
                    low = mid + 1;
                }
            }

            // Case 3: Right half is sorted
            else {

                // Is target inside the sorted right half?
                if (target >= nums[mid] && target <= nums[high]) {
                    // Search right
                    low = mid + 1;
                }
                else {
                    // Search left
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};