class Solution {
public:
    int first(vector<int>& nums, int target) {
        int first = -1;
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return first;
    }

    int last(vector<int>& nums, int target) {
        int last = -1;
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int firstIndex = first(nums, target);

        if(firstIndex == -1) {
            return {-1, -1};
        }

        int lastIndex = last(nums, target);

        ans.push_back(firstIndex);
        ans.push_back(lastIndex);

        return ans;
    }
};