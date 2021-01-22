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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size() == 0)
            return NULL;
        
        int shdReturn = true;
        
        for(auto i:lists)
            if(i!=NULL){
                shdReturn  = false;
                break;
            }
        
        if(shdReturn)
            return NULL;
        
        ListNode* sorted = new ListNode();
        ListNode* head = sorted;
        
        int index=0,min = INT_MAX,left = lists.size();
        
        while(true){
            left = lists.size();
            min = INT_MAX;
            for(int i=0;i<lists.size();i++){
                if(lists[i] == NULL){
                    left --;
                    continue;
                }
                if(lists[i]->val < min){
                    index = i;
                    min = lists[i]->val;
                }
            }
            if(min == INT_MAX || left == 0)
                return head;
            sorted->val = min;
            if(left == 1){
                lists[index] = lists[index]->next;
                break;
            }
            sorted->next = new ListNode();
            sorted = sorted->next;
            lists[index] = lists[index]->next;
        }
        
        for(auto i:lists){
            while(i!=NULL){
                sorted->next = new ListNode();
                sorted = sorted->next;
                sorted->val = i->val;
                i = i->next;
                }
                
        }
        
        return head;
        
    }
};
