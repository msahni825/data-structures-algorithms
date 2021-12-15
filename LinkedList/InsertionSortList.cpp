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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* newHead=NULL;
        while(head){
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            if(newHead==NULL){
                newHead=temp;
            }
            else if(newHead->val >= temp->val){
                temp->next=newHead;
                newHead=temp;
            }
            else{
                ListNode* root=newHead;
                while(root->next){
                    if(temp->val > root->val && temp->val <= root->next->val){
                        temp->next=root->next;
                        root->next=temp;
                        break;
                    }
                    root=root->next;
                }
                if(root->next==NULL){
                    root->next=temp;
                }
            }
        }
        return newHead;
    }
};
/*
=>4 2 1 3
- 2 4 1 3
- 1 2 4 3
- 1 2 3 4 
*/
