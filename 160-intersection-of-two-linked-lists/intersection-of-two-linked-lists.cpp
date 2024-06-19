/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        int len = 0;
        while(head != NULL){
            head = head->next;
            len++;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        if(headA == headB) return headA;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int lenA = length(headA);
        int lenB = length(headB);

        if(lenA > lenB){
            int diff = lenA - lenB;
            while(diff != 0){
                temp1 = temp1->next;
                diff--;
            }
        }
        else{
            int diff = lenB - lenA;
            while(diff != 0){
                temp2 = temp2->next;
                diff--;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};