/*
19. Remove Nth Node From End of List
Medium
Topics
premium lock icon
Companies
Hint
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Step 2: Initialize pointers
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Step 3: Move fast n+1 steps
        for(int i = 0; i <= n; i++)
        {
            fast = fast->next;
        }

        // Step 4: Move both pointers
        while(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // Step 5: Delete node
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        // Step 6: Save new head
        ListNode* newHead = dummy->next;

        delete dummy;

        return newHead;
    }
};