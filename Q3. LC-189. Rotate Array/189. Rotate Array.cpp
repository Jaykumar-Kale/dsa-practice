/*
LC Question : 189. Rotate Array
Question Link : https://leetcode.com/problems/rotate-array/

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

// ----------------------------------------- Solution -----------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     void reverseNo(vector<int>& nums,int start,int end){
//         while(start < end){
//             int temp = nums[start];
//             nums[start] = nums[end];
//             nums[end] = temp;
//             start++;
//             end--;
//         }
//     }
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;
//         if(n==0)return;
//         reverseNo(nums,0,n-k-1);
//         reverseNo(nums,n-k,n-1);
//         reverseNo(nums,0,n-1);
//     }
// };

// ----------------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def reverseNo(self,nums:List[int],start:int,end:int)-> None:
//         while(start < end):
//             nums[start],nums[end] = nums[end],nums[start]
//             start +=1
//             end-=1

//     def rotate(self, nums: List[int], k: int) -> None:
//         """
//         Do not return anything, modify nums in-place instead.
//         """
//         n = len(nums)
//         if(n == 0):return
//         k = k % n
//         if(k==0):return
//         self.reverseNo(nums,0,n-k-1)
//         self.reverseNo(nums,n-k,n-1)
//         self.reverseNo(nums,0,n-1)
        
// ----------------------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * @param {number[]} nums
//  * @param {number} k
//  * @return {void} Do not return anything, modify nums in-place instead.
//  */
// var reverseNo = function(nums,start,end){
//     while(start < end){
//         [nums[start],nums[end]] = [nums[end],nums[start]];
//         start++;
//         end--;
//     }
// }
// var rotate = function(nums, k) {
//     const n = nums.length;
//     if(n ==0)return;
//     k = k % n;
//     if(k ==0)return;
//     reverseNo(nums,0,n-k-1);
//     reverseNo(nums,n-k,n-1);
//     reverseNo(nums,0,n-1);
// };
// ----------------------------------------------------------------------------------------------------------------------------