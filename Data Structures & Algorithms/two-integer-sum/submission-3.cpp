class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_map;

        for(unsigned int k = 0; k < nums.size(); k++){
            hash_map[nums[k]] = k;
        }

        for(unsigned int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(hash_map.count(difference) && hash_map[difference] != i){
                return {i, hash_map[difference]};
            }
        }

        return {};
    }
};
