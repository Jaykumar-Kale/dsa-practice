/*
LC Question: 876. Middle of the Linked List
Link : https://leetcode.com/problems/middle-of-the-linked-list/

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]

*/

//-------------------------------------------------------------------------------------------------------------
// C++ Solution:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };
//-------------------------------------------------------------------------------------------------------------
// Python Solution:

// # Definition for singly-linked list.
// # class ListNode:
// #     def __init__(self, val=0, next=None):
// #         self.val = val
// #         self.next = next
// class Solution:
//     def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
//         slow = head
//         fast = head
//         while fast and fast.next :
//             slow = slow.next
//             fast = fast.next.next
//         return slow

//-------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * Definition for singly-linked list.
//  * function ListNode(val, next) {
//  *     this.val = (val===undefined ? 0 : val)
//  *     this.next = (next===undefined ? null : next)
//  * }
//  */
// /**
//  * @param {ListNode} head
//  * @return {ListNode}
//  */
// var middleNode = function(head) {
//     let slow = head;
//     let fast = head;
//     while(fast !== null && fast.next !== null){
//         slow = slow.next;
//         fast = fast.next.next;
//     }
//     return slow;
// };
//-------------------------------------------------------------------------------------------------------------