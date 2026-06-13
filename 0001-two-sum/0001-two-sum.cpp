class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        // Changed '<=' to '<' and '.length' to '.size()'
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    v = {i, j};
                    return v; // Return immediately once found to save time
                }
            }
        }
        return v;
    }
};