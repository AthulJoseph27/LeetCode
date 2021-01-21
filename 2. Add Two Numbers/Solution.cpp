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
        if(l1 == NULL && l2 == NULL)
            return NULL;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        int remainder = 0;
        ListNode *node = new ListNode();
        ListNode *head = node;
        
        int sum = (l1->val+l2->val);
        sum += remainder;
        remainder = sum/10;
        node->val = sum%10;
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1 != NULL && l2!=NULL){
            sum = (l1->val+l2->val);
            sum += remainder;
            remainder = sum/10;
            node->next = new ListNode();
            node = node->next;
            node->val = sum%10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != NULL){
            sum = l1->val + remainder;
            remainder = sum/10;
            node->next = new ListNode();
            node = node->next;
            node->val = sum%10;
            l1 = l1->next;
        }
        
        while(l2 != NULL){
            sum = l2->val + remainder;
            remainder = sum/10;
            node->next = new ListNode();
            node = node->next;
            node->val = sum%10;
            l2 = l2->next;
        }
        
        if(remainder!=0){
            node->next = new ListNode();
            node = node->next;
            node->val = remainder;
        }
        
        return head;
        
    }
};
