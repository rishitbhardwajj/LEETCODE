class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string s = to_string(n);

        vector<int> arr;
        map<int, int> mpp;

        for (char c : s) {
            arr.push_back(c - '0');
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        int mini = INT_MAX;

        for (auto it : mpp) {
            mini = min(mini, it.second);
        }

        for (auto it : mpp) {
            if (it.second == mini)
                return it.first;
        }

        return -1;
    }
};