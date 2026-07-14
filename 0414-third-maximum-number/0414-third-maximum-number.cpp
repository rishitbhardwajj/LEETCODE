class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int largest = nums[n - 1];

        int slargest = INT_MIN;
        bool secondFound = false;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != largest) {
                slargest = nums[i];
                secondFound = true;
                break;
            }
        }

        if (!secondFound) return largest;

        int tlargest = INT_MIN;
        bool thirdFound = false;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != largest && nums[i] != slargest) {
                tlargest = nums[i];
                thirdFound = true;
                break;
            }
        }

        if (!thirdFound) return largest;

        return tlargest;
    }
};