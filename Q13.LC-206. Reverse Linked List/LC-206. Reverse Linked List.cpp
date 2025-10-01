/*
LC Question: 206. Reverse Linked List
Link: https://leetcode.com/problems/reverse-linked-list/

Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

*/

//-------------------------------------------------------------------------------------------------------------
// C++ Solution:

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;
//         }
//         ListNode* newNode = reverseList(head->next);
//         ListNode* front = head->next;
//         front->next = head;
//         head->next = NULL;
//         return newNode;
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
//     def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
//         if head is None or head.next is None:
//             return head
//         newNode = self.reverseList(head.next)
//         front = head.next
//         front.next = head
//         head.next = None
//         return newNode


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
// var reverseList = function(head) {
//     if(head == null || head.next == null){
//         return head;
//     }
//     newNode = reverseList(head.next);
//     head.next.next = head;
//     head.next = null;
//     return newNode;
// };
//-------------------------------------------------------------------------------------------------------------