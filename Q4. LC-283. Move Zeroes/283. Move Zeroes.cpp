/*
LC Question 283: Move Zeroes
Link: https://leetcode.com/problems/move-zeroes/

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
*/
// ----------------------------------------- Solution -----------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int j =-1;
//         for(int i=0;i<n;i++){
//             if(nums[i] == 0){
//                 j = i;
//                 break;
//             }
//         }
//         if(j == -1)return;
//         for(int i = j+1;i<n;i++){
//             if(nums[i] != 0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
//     }
// };

// -------------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def moveZeroes(self, nums: List[int]) -> None:
//         """
//         Do not return anything, modify nums in-place instead.
//         """
//         j = -1
//         n = len(nums)
//         for i in range(0,n):
//             if(nums[i] == 0):
//                 j = i
//                 break
//         if(j == -1):return
//         for i in range(j+1,n):
//             if(nums[i] != 0):
//                 nums[i],nums[j] = nums[j],nums[i]
//                 j += 1

// -------------------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * @param {number[]} nums
//  * @return {void} Do not return anything, modify nums in-place instead.
//  */
// var moveZeroes = function(nums) {
//     let n = nums.length;
//     let j =-1;
//     for(let i=0;i<n;i++){
//         if(nums[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     if(j == -1)return;
//     for(let i=j+1;i<n;i++){
//         if(nums[i] != 0){
//             [nums[i],nums[j]] = [nums[j],nums[i]];
//             j++;
//         }
//     }
// };
// -------------------------------------------------------------------------------------------------------------------------