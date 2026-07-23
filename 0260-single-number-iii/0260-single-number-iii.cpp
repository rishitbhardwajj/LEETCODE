class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>lst;
        map<int,int>mpp;
        for(int i = 0; i<nums.size(); i++){
               mpp[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(mpp[nums[i]]==1){
                lst.push_back(nums[i]);
            }
        }
        return lst;
    }
};