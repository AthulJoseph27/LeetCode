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
            
        ListNode* x = head;
        ListNode* prev = head;
        
        for(int i=0;i<=n;i++){
            if(x == NULL){
              return prev->next;
            }
            x = x->next;
        }
        
        while(x!=NULL){
            x = x->next;
            prev = prev->next;
        }
        
        prev->next = prev->next->next;
        
        return head;
        
    }
};
