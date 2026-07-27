class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long pre = 1;
        long long suff = 1;
        long long ans = INT_MIN;
        long long n = nums.size();
        for(long long i = 0; i<nums.size(); i++){
            if(pre==0){
                pre = 1;
            }
            if(suff==0){
                suff = 1;
            }
            pre*=nums[i];
            suff*=nums[n-1-i];
            ans = max(ans,max(pre,suff));
        }
        return ans;
    }
};