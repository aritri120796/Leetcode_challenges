/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //struct ListNode* head;
public:
    
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node;
        ListNode* p=node;
        
        while((temp->next)!=NULL){
            temp->val=(temp->next)->val;
            
            p=temp;
            temp=temp->next;
        }
        
        p->next=NULL;
        delete(temp);
        
    }
};