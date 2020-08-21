/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.*/


//two poiters;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first = 0;
        int second = 0;
        int n = nums.size();
        while (second != n){
            if (nums[second] != 0){
                swap(nums[first],nums[second]);
                first++;
                second++;
            }   
            else{
                second++;
            }
        }
    }
};
//additional array
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                res.push_back(nums[i]);
            }
        }
        while(res.size() != nums.size()){
            res.push_back(0);
        }
        nums = res;
    }
};

