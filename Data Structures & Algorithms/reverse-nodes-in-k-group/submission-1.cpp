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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        ListNode* result = &dummy;
        ListNode* curr = head;
        ListNode* targ = head;
        ListNode* end = head;
        while(curr){
            targ = curr;
            int c = 0;
            bool isend = false;
            while(c<k){
                c++;
                if(!end){
                    isend = true;
                    break;
                }else{
                    end=end->next;
                }
            }
            if(!isend){
                for(int i=0;i<k;i++){
                    ListNode* tmp = result->next;
                    ListNode* tmp2 = curr->next;
                    result->next = curr;
                    curr->next =tmp;
                    curr=tmp2;
                }
            }else{
                result->next = curr;
                curr=nullptr;
            }
            result = targ;
            
        }
        return dummy.next;
    }
};
