class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> arr;
int sum = 0;
int prod = 1;
string s = to_string(n);
        for (char c : s) {
            arr.push_back(c - '0');
        }
for(int i = 0; i<arr.size(); i++){
    sum+=arr[i];
    prod*=arr[i];
}
int res = prod-sum;
return res;
    }
};