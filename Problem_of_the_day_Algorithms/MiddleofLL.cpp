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
    ListNode* middleNode(ListNode* head) {
        //1. find length
        //2. traverse till mid and print
        int len=0;
        ListNode* temp=head;
        ListNode* temp2=head;
        ListNode* result;
        while(temp->next){
            len++;
            temp=temp->next;
        }
        //cout<<len;
        len=len+1;
        if((len)%2==0){
            //even length: take second mid
            int mid=(len/2);
            while(mid--){
                temp2=temp2->next;
            }
            result=temp2;
        }
        else{
            //odd length: go to mid
            int mid=len/2;
            while(mid--){
                temp2=temp2->next;
            }
            result=temp2;
        }
        return result;
    }
};
