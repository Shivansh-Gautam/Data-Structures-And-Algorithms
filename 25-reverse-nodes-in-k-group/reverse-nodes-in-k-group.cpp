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
    int count(ListNode* head){
        int n = 0;
        while(head){
            head = head->next;
            n++;
        }
        return n;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int num = count(head);
        if(num < k) return head;

        int x = k;
        ListNode* nxt;
        ListNode* curr = head;
        ListNode* last = NULL;

        while(x--){
            nxt = curr->next;
            curr->next = last;
            last = curr;
            curr = nxt;
        }

        head->next = reverseKGroup(nxt,k);
        return last;
    }
};