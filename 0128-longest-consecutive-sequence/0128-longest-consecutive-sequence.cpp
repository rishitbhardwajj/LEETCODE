class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int longest = 1;
        int cnt = 0;
        int last_smaller = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]-1==last_smaller){
                last_smaller = nums[i];
                cnt+=1;
            }
            else if(last_smaller!=nums[i]){
                last_smaller = nums[i];
                cnt = 1;
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};