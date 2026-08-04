class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = nums[0];
        int b = nums[n-1];
        vector<int>ans;
        map<int,int>mpp;
        for(int i = 0; i<n; i++){
              mpp[nums[i]] = 1;
        }
        for(int i = a; i<b; i++){
             if(mpp[i]==0){
                ans.push_back(i);
             }
        }   
        return ans;
    }
};