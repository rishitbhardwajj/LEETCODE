class Solution {
public:
    int addDigits(int num) {
        int sum = 0;

        while(true) {
            while(num != 0) {
                sum += num % 10;
                num = num / 10;
            }

            string n = to_string(sum);

            if(n.size() == 1) {
                return sum;
            }

            num = sum;
            sum = 0;
        }
    }
};