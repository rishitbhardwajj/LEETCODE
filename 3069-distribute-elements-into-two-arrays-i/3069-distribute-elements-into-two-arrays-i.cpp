class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        pos.push_back(nums[0]);
        neg.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (pos.back() > neg.back()) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        pos.insert(pos.end(), neg.begin(), neg.end());

        return pos;
    }
};