/*
LC Question : 53. Maximum Subarray
Link : https://leetcode.com/problems/maximum-subarray/

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The contiguous subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The contiguous subarray [1] has the largest sum 1.
*/

//---------------------------------------------------------------------------------------------------------------------
// c++ Solution:

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int maxi = nums[0];
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += nums[i];
//             maxi = max(maxi, sum);
//             if (sum < 0) {
//                 sum = 0;
//             }
//         }
//         return maxi;
//     }
// };

//---------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def maxSubArray(self, nums: List[int]) -> int:
//         n = len(nums)
//         maxi = nums[0]
//         sum = 0
//         for num in nums:
//             sum += num
//             maxi = max(maxi,sum)
//             if(sum < 0):
//                 sum = 0
//         return maxi

//---------------------------------------------------------------------------------------------------------------------
// JavaScript Solution:

// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var maxSubArray = function(nums) {
//     let n = nums.length;
//     let maxi = nums[0];
//     let sum = 0;
//     for(let i=0;i<n;i++){
//         sum += nums[i];
//         maxi = Math.max(maxi,sum);
//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     return maxi;
// };

//---------------------------------------------------------------------------------------------------------------------