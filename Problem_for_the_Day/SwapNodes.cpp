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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* curr=temp;
        
        while(curr->next && curr->next->next){
            ListNode* first=curr->next;
            ListNode* second=curr->next->next;
            
            first->next=second->next;
            second->next=first;
            curr->next=second;
            curr=curr->next->next;
        }
        return temp->next;
    }
};
