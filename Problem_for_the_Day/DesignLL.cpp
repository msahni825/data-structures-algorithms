class MyLinkedList {
public:
    int val;
    ListNode *next, *head;
    
    MyLinkedList() {
        next=NULL;
        head=NULL;
    }
     /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        int c=0;
        ListNode* temp=head;
        while(temp){
            if(c==index){
                return temp->val;
            }
            temp=temp->next;
            c++;
        }
        return -1;
    }
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode* n=new ListNode;
        n->val=val;
        n->next=head;
        head=n;
    }
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode* n=new ListNode;
        n->val=val;
        if(!head){
            head=n;
        }
        else{
            ListNode* temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=n;
        }
    }
     /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        int c=0;
        int len=0;
        ListNode* n=new ListNode;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            len++;
        }
        if(index>len){
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        temp=head;
        while(temp && c<index-1){
            temp=temp->next;
            c++;
        }
        n->val=val;
        ListNode* temp1=temp->next;
        temp->next=n;
        n->next=temp1;
    }
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int len=0;
        int c=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        if(index==0){
            if(head){
                //first node deleted
                head=head->next;
            }
            return;
        }
        if(index>=len){
            return;
        }
        temp=head;
        while(temp && c<index-1){
            temp=temp->next;
            c++;
        }
        temp->next=temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
