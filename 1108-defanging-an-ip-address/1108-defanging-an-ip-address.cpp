class Solution {
public:
    string defangIPaddr(string address) {
        vector<string> arr;
        string s;
        for(int i = 0; i < address.size(); i++){
            arr.push_back(string(1, address[i]));
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == "."){
                arr[i] = "[.]";
            }
        }
        for(int i = 0; i < arr.size(); i++){
            s += arr[i];
        }
        return s;
    }
};