class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> indexes;

        for(int i = 0; i < nums.size(); i++){
            auto idx = indexes.find(nums[i]);

            if(idx != indexes.end()){
                if(std::abs(idx->second - i) <= k){
                    return true;
                }
            }

            indexes[nums[i]] = i;
        }
        return false;
    }
};