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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int result=0;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;            
        }
        while(head){
            result+=(pow(2,(len-1))*head->val);
            head=head->next;
            len--;
        }
        return result;
    }
};
