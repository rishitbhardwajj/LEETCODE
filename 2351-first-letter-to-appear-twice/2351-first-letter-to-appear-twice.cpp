class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> v;

        for(auto ch : s) {
            v.push_back(ch);
        }

        for(int i = 1; i < v.size(); i++) {
            for(int j = 0; j < i; j++) {
                if(v[i] == v[j]) {
                    return v[i];
                }
            }
        }

        return -1;
    }
};