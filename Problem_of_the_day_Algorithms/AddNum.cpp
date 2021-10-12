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
        ListNode* result=new ListNode(INT_MIN);
        ListNode* tail=result;
        int carry=0;
        int sum=0;
        while(l1 || l2){
            
            if(l1 && l2){
                sum=l1->val+l2->val+carry;
                l1=l1->next;
                l2=l2->next;
        }
        else if(!l1 && l2){
            sum=l2->val+carry;
            l2=l2->next;
        }
        else if(l1 && !l2){
            sum=l1->val+carry;
            l1=l1->next;
        }
        carry=0;
        if(sum>9){
            sum=sum%10;
            carry=1;
        }
        ListNode* temp=new ListNode(sum);
        tail->next=temp;
        tail=tail->next;
        }
        if(carry){
            ListNode* temp=new ListNode(carry);
            tail->next=temp;
        }
        return result->next;
        // return result;
    }
};
