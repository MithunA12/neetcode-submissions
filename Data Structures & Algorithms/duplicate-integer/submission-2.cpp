class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int num : nums){
            s.insert(num);
        }

        if(s.size() - nums.size() != 0){
            return true;
        }

        return false;
    }
};