/*
LC Question : 344. Reverse String
Link : https://leetcode.com/problems/reverse-string/

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/
//--------------------------------------------------------------------------------------------------------------------
// C++ Solution :

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int left=0;
//         int right = s.size()-1;
//         while(left < right){
//             swap(s[left],s[right]);
//             left++;
//             right--;
//         }
//     }
// };

//--------------------------------------------------------------------------------------------------------------------
// Python Solution :

// class Solution:
//     def reverseString(self, s: List[str]) -> None:
//         """
//         Do not return anything, modify s in-place instead.
//         """
//         left,right=0,len(s)-1
//         while left < right :
//             s[left],s[right] = s[right],s[left]
//             left +=1
//             right-=1

//--------------------------------------------------------------------------------------------------------------------
// Node.js Solution :

// /**
//  * @param {character[]} s
//  * @return {void} Do not return anything, modify s in-place instead.
//  */
// var reverseString = function(s) {
//     let left = 0;
//     let right = s.length-1;
//     while(left < right){
//         [s[left],s[right]] = [s[right],s[left]];
//         left++;
//         right--;
//     }
// };
//--------------------------------------------------------------------------------------------------------------------