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
    void reorderList(ListNode* head) {
        ListNode* s = head;
        int size=0;
        while(s){
            size++;
            s=s->next;
        }
        s = head;
        ListNode* r = nullptr;
        for(int i=0;i<size;i++){
            if(i>=size/2){
                r = s;
                cout<<s->val;
                break;
            }
            s=s->next;
        }
        ListNode* prev = nullptr;
        ListNode* curr = r;
        while(curr){
            cout<< curr->val;
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        s = head;
        r = prev;
        ListNode* temp = nullptr;
        while(r->next){
            temp = s->next;
            s->next = r;
            s = temp;
            temp = r->next;
            r->next = s;
            r = temp;
        }
    }
};
