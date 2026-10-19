class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int countOnes = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                countOnes++;
                maxOnes = max(maxOnes, countOnes);
            } else {
                countOnes = 0;
            }
        }

        return maxOnes;
    }
};