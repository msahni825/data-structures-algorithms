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
    // void(ListNode* &head, int k){
    //     ListNode* temp=head;
    //     while(temp){
    //         vector<int> demo(k,0);
    //         for(int i=0;i<k;i++){
    //             demo.push_back(temp->val);
    //             temp=temp->next;
    //         }
    //         reverse(demo.begin(),demo.end());
    //         //create a new LL and add demo vector 
    //         while(demo.size()--){
    //             ListNode* l=new ListNode(demo[i]);
    //             l=l->next;
    //         }   
    //         //temp=temp->next;
    //     }
    //     head=l;
    // }
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* node=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return node;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1){
            return head;
        }
        if(head==NULL){
            return NULL;
        }
        ListNode *nhead, *ntail;
        ListNode* demo=head;
        int i=0;
        while(i<k-1 && demo!=NULL){
            i++;
            demo=demo->next;
        }
        if(i==k-1 && demo==NULL){
            return head;
        }
        if(i<k-1){
            return head;
        }
        ntail=head;
        ListNode* nextptr=NULL;
        if(demo){
            nextptr=demo->next;
            demo->next=NULL;
        }
        nhead=reverse(head);
        ntail->next=reverseKGroup(nextptr,k);
        return nhead;
    }
};
