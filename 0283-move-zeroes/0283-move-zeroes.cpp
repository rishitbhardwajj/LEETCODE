class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       long long j = -1;
       for(long long i = 0; i<nums.size(); i++){
        if(nums[i]==0){
            j = i;
            break;
        }
       }
       if(j==-1){
        return;
       }
       for(long long i = j+1; i<nums.size(); i++){
          if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
          }
       }
    }
};