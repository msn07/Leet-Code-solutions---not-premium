//Kadane algorithm
//Explanation: Decide if the currentSum can be started as a new subarray or not. Compare curretnSum with curretnMax to find the maximum
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int currentMax = nums[0];
        for (int i = 1; i < nums.size(); i++){
            currentSum = max(nums[i], currentSum + nums[i]);
            currentMax = max(currentMax, currentSum);
        }
        return currentMax;
    }
};
