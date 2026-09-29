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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* ans = &dummy;
        int carry=0;
        while(l1){
            if(l2){
                ListNode* now = new ListNode((l1->val + l2->val + carry)%10);
                carry = (l1->val + l2->val + carry)/10;
                ans->next = now;
                ans = ans->next;
                l1=l1->next;
                l2=l2->next;
            }else{
                ListNode* now = new ListNode((l1->val + carry)%10);
                carry = (l1->val + carry)/10;
                ans->next = now;
                ans = ans->next;
                l1 = l1->next;
            }
        }
        while(l2){
            ListNode* now = new ListNode((l2->val + carry)%10);
            carry = (l2->val + carry)/10;
            ans->next = now;
            ans = ans->next;
            l2 = l2->next;
        }
        if(carry){
            ListNode* now = new ListNode(carry);
            ans->next = now;
        }
        return dummy.next;
    }
};
