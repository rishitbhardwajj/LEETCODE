class Solution {
public:
    char findTheDifference(string s, string t) {
      vector<int>arr1;
      vector<int>arr2;
      for(int i = 0; i<s.size(); i++){
            arr1.push_back(s[i]);
      }
      for(int i = 0; i<t.size(); i++){
            arr2.push_back(t[i]);
      }
       int sum1 = 0, sum2 = 0;
     for (int x : arr1)
            sum1 += x;

        for (int x : arr2)
            sum2 += x;

        char res = char(sum2 - sum1);
      return res;
    }
};