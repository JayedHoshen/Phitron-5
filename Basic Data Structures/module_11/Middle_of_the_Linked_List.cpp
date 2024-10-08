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


// first

// class Solution {
// public:
//     int size(ListNode* head) {
//         ListNode* tmp = head;
//         int cnt = 0;
//         while(tmp != NULL) {
//             cnt++;
//             tmp = tmp->next;
//         }
//         return cnt;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int sz = size(head);
//         ListNode* tmp = head;
//         for(int i = 1; i <= sz/2; i++) tmp = tmp->next;
//         return tmp;
//     }
// };


// second way
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };