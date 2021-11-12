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
    ListNode* removeElements(ListNode* head, int v) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=new ListNode(-1,head);
        ListNode* prev=temp;
        
        for(;head;head=head->next){
            if(head->val!=v){
                prev=head;
            }
            else{
                //curr node deleted
                prev->next=head->next;
            }
          //  head=head->next;
        }
        return temp->next;
    }
};
