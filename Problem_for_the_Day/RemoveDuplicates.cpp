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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *first=NULL;
        ListNode *second=NULL;
        ListNode *third=NULL;
        ListNode *curr=head;
        while(head){
            first=head->next;
            int count=1;
            while(first!=NULL && first->val==head->val){
                first=first->next;
                count++;
            }
            if(count==1){
                if(second==NULL){
                    second=third=head;
                    head->next=NULL;
                }
                else{
                    third->next=head;
                    head->next=NULL;
                    third=third->next;
                }
            }
            head=first;
        }
        // ListNode *first=head;
        // ListNode *second=head->next;
        // while(second!=0){
        //     if(first->val==second->val){
        //         second=second->next;
        //         first=first->next;
        //     }
        //     else{
        //         result=new ListNode(first->val);
        //         result=result->next;
        //         second=second->next;
        //         first=first->next;
        //     }
        // }
        return second;
    }
};
