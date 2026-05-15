class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = 0;
        bool broken = false;

        string s = "";
        int smallest = INT_MAX;

        if(strs.size() == 1){
            return strs[0];
        }

        while(!broken){
            for(unsigned int i = 0; i < strs.size()-1; i++){
                if(idx == smallest){
                    broken = true;
                    return s;
                }
                if(strs[i][idx] != strs[i+1][idx]){
                    broken = true;
                    return s;
                }
                if(strs[i].length() < smallest){
                    smallest = strs[i].length();
                }
            }
            s += strs[0][idx];
            idx++;
        }

        return "";
    }
};