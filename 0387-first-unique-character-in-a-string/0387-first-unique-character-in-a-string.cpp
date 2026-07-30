class Solution {
public:
    int firstUniqChar(string s) {
        map<int,int>mpp;
        for(int i = 0; i<s.size(); i++){
           mpp[s[i]]++;
        }
         for(int i = 0; i<s.size(); i++){
            if(mpp[s[i]]==1){
                int idx = i;
                return idx;
            }
         }
         return -1;
    }
};