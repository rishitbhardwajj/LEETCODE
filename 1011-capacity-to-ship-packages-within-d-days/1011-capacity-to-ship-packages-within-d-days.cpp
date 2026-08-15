class Solution {
public:
int packages(vector<int>& weights,int capacity){
    int cnt = 1;int load = 0;
    for(int i = 0; i<weights.size(); i++){
      if(load+weights[i]>capacity){
        load = weights[i];
        cnt++;
      }
      else{
      load+= weights[i];
      }
    }
    return cnt;
}
    int shipWithinDays(vector<int>& weights, int days) {
      int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid = (low+high)/2;
            int res = packages(weights,mid);
            if(res<=days){
             high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};