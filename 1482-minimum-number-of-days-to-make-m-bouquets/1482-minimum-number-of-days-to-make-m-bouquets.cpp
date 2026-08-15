class Solution {
public:
bool method1(vector<int>& bloomDay,int day, int m, int k){
    int cnt = 0;
    int noOfB = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= day) {
            cnt++;
        } else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    long long val = 1LL * m * k;
    if (val > bloomDay.size())
        return -1;
    while(low<=high){
        int mid = (low+high)/2;
        bool possible = method1(bloomDay,mid,m,k);
      if (possible) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
    }
};