/*

Code
Testcase
Testcase
Test Result
82. Remove Duplicates from Sorted List II
Solved
Medium
Topics
premium lock icon
Companies
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

Example 1:


*/
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* current = head;

        while (current != nullptr) {

            // Found duplicates
            if (current->next != nullptr &&
                current->val == current->next->val) {

                int duplicateValue = current->val;

                while (current != nullptr &&
                       current->val == duplicateValue) {

                    current = current->next;
                }

                prev->next = current;
            }
            else {
                prev = current;
                current = current->next;
            }
        }

        return dummy.next;
    }
};