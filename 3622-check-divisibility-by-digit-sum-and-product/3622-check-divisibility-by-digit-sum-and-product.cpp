class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int original = n;
        while(n!=0){
            sum+=n%10;
            prod*=n%10;
            n = n/10;
        }
        int x = sum+prod;
        if(original%x==0){
            return true;
        }
        return false;
    }
};