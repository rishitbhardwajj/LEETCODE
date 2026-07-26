class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> pos, neg;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end(), greater<int>());

        int e = 0, o = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                nums[i] = pos[e++];
            else
                nums[i] = neg[o++];
        }

        return nums;
    }
};