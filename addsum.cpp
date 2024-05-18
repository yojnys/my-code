class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hash;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int x = target - nums[i];
            if (hash.find(x) != hash.end()){
                return {hash[x],i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
