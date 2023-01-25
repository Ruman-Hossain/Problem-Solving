class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (target == nums[mid])
                return mid;
            //Rotation Exists and  middle element is in the left part of the array
            if (nums[mid] > nums[right]) {
                if (target < nums[mid] && target >= nums[left])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // Rotation Exists and middle element is in the right part of the array
            else if (nums[mid] < nums[left]) {
                if (target > nums[mid] && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            // No Rotation Exists; just like normal binary search
            else {
                if (target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        return -1;
    }
};