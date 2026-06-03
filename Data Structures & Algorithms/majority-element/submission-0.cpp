class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }

        int bestFreq = 0;
        int best = 0;
        for(auto& pair : freq){
            if(pair.second > bestFreq){
                bestFreq = pair.second;
                best = pair.first;
            }
        }

        return best;
    }
};