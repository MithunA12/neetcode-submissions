class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> set;
        for(unsigned int i = 0; i < nums.size(); i++){
            set.insert(nums[i]);
        }
        return set.size() < nums.size();
        
    }
};