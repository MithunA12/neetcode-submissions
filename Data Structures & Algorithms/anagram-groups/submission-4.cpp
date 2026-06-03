class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            vector<int> count(26, 0);
            for(char c : strs[i]){
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1; i < count.size(); i++){
                key += "," + to_string(count[i]);
            }

            m[key].push_back(strs[i]);
            
        }

        vector<vector<string>> ret;
        for(auto pair : m){
            ret.push_back(pair.second);
        }

        return ret;
    }
};
