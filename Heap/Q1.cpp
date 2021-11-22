/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
        priority_queue<int,vector<int>, greater<int>> minHeap;
        
        for(int i=0;i<lists.size();i++){
            auto head=lists[i]; //[1,4,5]
            while(head){
                minHeap.push(head->val);    // add [1,4,5] to min heap, now add [1,3,4] and [2,6] to minHeap
                head=head->next;
            }
        }
        auto temp=new ListNode(0);
        auto tail=temp;
        while(!minHeap.empty()){
            auto n=new ListNode(minHeap.top());
            tail->next=n;
            tail=tail->next;
            minHeap.pop();
        }
        tail->next=NULL;    //adding nullptr to final output sorted list
        return temp->next;  //return head of new listnode
    }
};
