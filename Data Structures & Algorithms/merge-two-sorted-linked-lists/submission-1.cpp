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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        ListNode* head = nullptr;
        if(!c1){
            return c2;
        }else if(!c2){
            return c1;
        }
        if(c1->val < c2->val){
            head = c1;
            c1 = c1->next;
        }else{
            head = c2;
            c2 = c2->next;
        }
        ListNode* temp = head;

        
        while(c2||c1){
            if(!c1){
                temp->next=c2;
                c2=c2->next;
                temp = temp->next;
            }else if(!c2){
                temp->next=c1;
                c1=c1->next;
                temp = temp->next;
            }else if(c1->val<c2->val){
                temp->next=c1;
                c1=c1->next;
                temp  = temp->next;
            }else{
                temp->next=c2;
                c2=c2->next;
                temp = temp->next;
            }
        }
        return head;
    }
};
