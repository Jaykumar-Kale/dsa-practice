/*
LC Question : 75. Sort Colors
Link : https://leetcode.com/problems/sort-colors/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]

*/

//-----------------------------------------------------------------------------------------------------------------------
// c++ Solution:

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int mid = 0;
//         int right = n - 1;
//         while (mid <= right) {
//             if (nums[mid] == 0) {
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             } else if (nums[mid] == 1)
//                 mid++;
//             else {
//                 swap(nums[mid], nums[right]);
//                 right--;
//             }
//         }
//     }
// };
//----------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def sortColors(self, nums: List[int]) -> None:
//         """
//         Do not return anything, modify nums in-place instead.
//         """
//         n = len(nums)
//         left =0
//         mid =0
//         right = n-1
//         while(mid <= right):
//             if(nums[mid] == 0):
//                 [nums[left],nums[mid]] = [nums[mid],nums[left]]
//                 left+=1
//                 mid+=1
//             elif(nums[mid]==1):mid+=1
//             else:
//                 [nums[mid],nums[right]] = [nums[right],nums[mid]]
//                 right-=1


//----------------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * @param {number[]} nums
//  * @return {void} Do not return anything, modify nums in-place instead.
//  */
// var sortColors = function (nums) {
//     let n = nums.length;
//     let low = 0;
//     let mid = 0;
//     let right = n - 1;
//     while (mid <= right) {
//         if (nums[mid] == 0) {
//             [nums[low], nums[mid]] = [nums[mid], nums[low]];
//             low++;
//             mid++;
//         } else if (nums[mid] == 1) {
//             mid++;
//         } else {
//             [nums[mid], nums[right]] = [nums[right], nums[mid]];
//             right--;
//         }
//     }

// };
//----------------------------------------------------------------------------------------------------------------------