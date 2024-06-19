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
    ListNode* getMiddle(ListNode* head){
         ListNode* slow = head;
         ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* pre = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            ListNode* next =  curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        ListNode* middle = getMiddle(head);

        ListNode* temp = middle->next;
        middle->next = reverse(temp);

        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        while(head2){
            if(head1->val != head2->val) return false;
                head1 = head1->next;
                head2 = head2->next;
            
        }
        temp = middle->next;
        middle->next = reverse(temp);
        return true;
        
    }
};