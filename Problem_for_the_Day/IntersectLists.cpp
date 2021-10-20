/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0;
        int lenB=0;
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        while(temp1!=0){
            lenA++;
            temp1=temp1->next;
        }
        cout<<lenA<<"\n";
        while(temp2!=0){
            lenB++;
            temp2=temp2->next;
        }
        cout<<lenB;
        
        ListNode *fast=headA;
        ListNode *slow=headB;
        if(lenA>lenB){
            while(lenA!=lenB){
                fast=fast->next;
                lenA--;
            }
        }
        if(lenA<lenB){
           while(lenA!=lenB){
               slow=slow->next;
               lenB--;
           }
        }
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};
