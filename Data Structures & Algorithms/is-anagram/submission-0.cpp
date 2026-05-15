class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> t_map;

        if(s.length() != t.length()){
            return false;
        }

        for(unsigned int i = 0; i < s.size(); i++){
            s_map[s[i]] += 1;
            t_map[t[i]] += 1;
        }

        for(auto pair : s_map){
            if(pair.second != t_map[pair.first]){
                return false;
            }
        }

        return true;
    }
};
