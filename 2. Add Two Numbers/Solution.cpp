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
        ListNode* ans = new ListNode;
        auto head = ans;
        int c=0,sum=0;
        while(l1!=NULL || l2!=NULL){
            sum = (l1==NULL ? 0 : l1->val)+(l2==NULL ? 0 : l2->val)+c;
            c = sum/10;
            ans->next = new ListNode(sum%10);
            ans = ans->next;
    
            if(l1!=NULL) l1 = l1->next;
            if(l2!=NULL) l2 = l2->next;
        }
        if(c!=0) ans->next = new ListNode(c);
        return head->next;
    }
};2. Add Two Numbers
