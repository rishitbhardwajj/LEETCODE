class Solution {
public:
    bool isPalindrome(string s) {
      for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
      string ans;
      for(char ch: s){
        if(isalnum(ch)){
            ans+=ch;
        }
      }
      s = ans;
    reverse(ans.begin(),ans.end());
      if(s==ans){
        return true;
      }
      return false;
    }
};