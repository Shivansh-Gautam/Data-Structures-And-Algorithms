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
    ListNode* reverseList(ListNode* head) {
        ListNode* last = NULL;
        ListNode* curr = head;
        ListNode* next;

        while(curr != NULL){
            next = curr->next;
            curr->next = last;
            last = curr;
            curr = next;
        }
        return last;
    }
};