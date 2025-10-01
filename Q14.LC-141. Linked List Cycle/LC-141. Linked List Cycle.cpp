/*
LC Question: 141. Linked List Cycle
Link: https://leetcode.com/problems/linked-list-cycle/

You are given the head of a linked list. Determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of
the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

*/

//-------------------------------------------------------------------------------------------------------------
// C++ Solution:

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) return false;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;          
//             fast = fast->next->next;   
//             if (slow == fast) {
//                 return true;            
//             }
//         }
//         return false; 
//     }
// };

//-------------------------------------------------------------------------------------------------------------
// Python Solution:

// # Definition for singly-linked list.
// # class ListNode:
// #     def __init__(self, x):
// #         self.val = x
// #         self.next = None

// class Solution:
//     def hasCycle(self, head: Optional[ListNode]) -> bool:
//         slow = head
//         fast = head
//         while fast is not None and fast.next is not None:
//             slow = slow.next
//             fast = fast.next.next
//             if(slow == fast):
//                 return True
//         return False


//-------------------------------------------------------------------------------------------------------------
// Javascript Solution:

// /**
//  * Definition for singly-linked list.
//  * function ListNode(val) {
//  *     this.val = val;
//  *     this.next = null;
//  * }
//  */

// /**
//  * @param {ListNode} head
//  * @return {boolean}
//  */
// var hasCycle = function (head) {
//     slow = head;
//     fast = head;
//     while (fast != null && fast.next != null) {
//         slow = slow.next;
//         fast = fast.next.next;
//         if (slow == fast) {
//             return true;
//         }
//     }
//     return false;
// };

//-------------------------------------------------------------------------------------------------------------