/*
LC Question: 118. Pascal's Triangle
Link : https://leetcode.com/problems/pascals-triangle/

Given an integer numRows, return the first numRows of Pascal's triangle.

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

*/

//-------------------------------------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     vector<int> generateRow(int row){
//         vector<int> ans;
//         long long ele = 1;
//         ans.push_back(1);
//         for(int col =1;col<row;col++){
//             ele = ele * (row-col)/col;
//             ans.push_back(ele);
//         }
//         return ans;
//     }
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;
//         for(int row=1;row<=numRows;row++){
//             ans.push_back(generateRow(row));
//         }
//         return ans;
//     }
// };

//-------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def generateRow(self, row:int) -> List[int]:
//         ans = []
//         val = 1
//         ans.append(val)
//         for col in range(1,row):
//             val = val * (row-col) // col
//             ans.append(val)
//         return ans

//     def generate(self, numRows: int) -> List[List[int]]:
//         ans = []
//         for row in range(1,numRows+1):
//             ans.append(self.generateRow(row))
//         return ans

//-------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * @param {number} numRows
//  * @return {number[][]}
//  */

// var generateRow = function (row) {
//     let ans = [];
//     let val = 1;
//     ans.push(val);

//     for (let col = 1; col < row; col++) {
//         val = (val * (row - col)) / col;
//         ans.push(val);
//     }
//     return ans;
// }
// var generate = function (numRows) {
//     let ans = [];
//     for (let row = 1; row <= numRows; row++) {
//         ans.push(generateRow(row));
//     }
//     return ans;
// };

//-------------------------------------------------------------------------------------------------------------