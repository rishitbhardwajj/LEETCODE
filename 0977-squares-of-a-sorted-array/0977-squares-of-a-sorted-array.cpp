class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
          ans.push_back(nums[i]*nums[i]);
        }
        for(int i = 0; i<nums.size(); i++){
            nums[i] = ans[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};