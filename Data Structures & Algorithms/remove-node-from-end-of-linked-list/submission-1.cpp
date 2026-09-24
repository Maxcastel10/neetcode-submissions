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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* start = &dummy;
        int size = 0;
        while(start){
            start = start->next;
            size++;
        }
        cout << size;
        int remove = size - n;
        start = &dummy;
        for(int i = 0 ; i < remove - 1 ; i++){
            start = start->next;   
        }
        if(start->next){
            start->next = start->next->next;
        }
        return dummy.next;
    }
};
