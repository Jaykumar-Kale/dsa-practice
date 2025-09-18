/*
LC Question 136. Single Number
link : https://leetcode.com/problems/single-number/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

*/

// ----------------------------------------- Solution -----------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n = nums.size();
//         int ans =0;
//         for(int i=0;i<n;i++){
//             ans = ans ^ nums[i];
//         }
//         return ans;
//     }
// };

// ---------------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def singleNumber(self, nums: List[int]) -> int:
//         n = len(nums)
//         ans = 0
//         for i in range(n):
//             ans = ans ^ nums[i]
//         return ans;

// ---------------------------------------------------------------------------------------------------------------------------
// JavaScript Solution:

// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var singleNumber = function(nums) {
//     let n = nums.length;
//     let ans = 0;
//     for(let i=0;i<n;i++){
//         ans = ans ^ nums[i];
//     }
//     return ans;
// };

// ---------------------------------------------------------------------------------------------------------------------------