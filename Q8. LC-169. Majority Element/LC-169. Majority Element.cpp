/*
LC Question : 169. Majority Element
Link : https://leetcode.com/problems/majority-element/

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/
//---------------------------------------------------------------------------------------------------------------------
// c++ Solution:

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         return nums[n/2];
//     }
// };

//---------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def majorityElement(self, nums: List[int]) -> int:
//         n = len(nums)
//         nums.sort()
//         return nums[n // 2]

//---------------------------------------------------------------------------------------------------------------------
// JavaScript Solution:

// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var majorityElement = function(nums) {
//     let n = nums.length;
//     nums.sort((a,b) => (a-b));
//     return nums[Math.floor(n/2)];
// };

//---------------------------------------------------------------------------------------------------------------------