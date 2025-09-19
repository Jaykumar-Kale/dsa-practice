/*
LC Question : 121. Best Time to Buy and Sell Stock
Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return
0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5
(price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

*/
//------------------------------------------------------------------------------------------------------------------
// C++ Solution:

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int maxP = 0;
//         int minNo = prices[0];
//         for(int i=0;i<n;i++){
//             minNo = min(minNo,prices[i]);
//             maxP = max(maxP,prices[i]-minNo);
//         }
//         return maxP;
//     }
// };

//------------------------------------------------------------------------------------------------------------------
// Python Solution:

// class Solution:
//     def maxProfit(self, prices: List[int]) -> int:
//         n = len(prices)
//         maxP = 0
//         minNo = prices[0]
//         for i in range(n):
//             minNo = min(minNo,prices[i]);
//             maxP = max(maxP,prices[i]-minNo);
//         return maxP

//------------------------------------------------------------------------------------------------------------------
//Javascript Solution:

// /**
//  * @param {number[]} prices
//  * @return {number}
//  */
// var maxProfit = function(prices) {
//     let n = prices.length;
//     let maxP =0;
//     let minNo = prices[0];
//     for(let i=0;i<n;i++){
//         minNo = Math.min(minNo,prices[i]);
//         maxP = Math.max(maxP,prices[i]-minNo);
//     }
//     return maxP;
// };

//------------------------------------------------------------------------------------------------------------------