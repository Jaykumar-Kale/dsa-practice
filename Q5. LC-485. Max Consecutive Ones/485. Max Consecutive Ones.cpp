/*
LC Question 485. Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2

*/

// ----------------------------------------- Solution -----------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i] == 1){
//                 count++;
//             }else{
//                 count = 0;
//             }
//             ans = max(ans,count);
//         }
//         return ans;
//     }
// };
// ---------------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
//         n = len(nums)
//         count = 0
//         ans = 0
//         for i in range(n):
//             if(nums[i] == 1):
//                 count+=1
//             else:
//                 count = 0    
//             ans = max(ans,count)
//         return ans

// --------------------------------------------------------------------------------------------------------------------------
// JavaScript Solution:

// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var findMaxConsecutiveOnes = function(nums) {
//     let n = nums.length;
//     let count = 0;
//     let ans= 0;
//     for(let i =0;i<n;i++){
//         if(nums[i]==1){
//             count++;
//         }else{
//             count=0;
//         }
//         ans = Math.max(ans,count);
//     }
//     return ans;
// };

// --------------------------------------------------------------------------------------------------------------------------