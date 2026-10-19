class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. Count the frequency of each element
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        // 2. Create buckets where the index is the frequency
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        for (auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }
        
        // 3. Gather the top k frequent elements starting from the highest frequency
        vector<int> result;
        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};