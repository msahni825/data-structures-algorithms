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
        //(len-n) position
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        ListNode* temp1=temp;
        ListNode* temp2=temp;
        //int len=0;
        n++;
        while(n--){
            //len++;
            temp1=temp1->next;
        }
        // cout<<len;
        // int dest=len-n-1;
        while(temp1){
            temp1=temp1->next; 
            temp2=temp2->next;
        }
        temp1=temp2->next;
        temp2->next=temp1->next;
        delete temp1;
        return temp->next;
        //return temp2;
    }
};
