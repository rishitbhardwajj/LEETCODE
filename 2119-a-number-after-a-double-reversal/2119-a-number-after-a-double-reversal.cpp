class Solution {
public:
    bool isSameAfterReversals(int num) {
       string s = to_string(num);
       reverse(s.begin(),s.end());
       int n1 = stoi(s);
       string s1 = to_string(n1);
       reverse(s1.begin(),s1.end());
       int n2 = stoi(s1);
       if(n2==num){
        return true;
       }
       return false;
    }
};