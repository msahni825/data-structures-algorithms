# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if l1==None:
            return l2
        elif l2==None:
            return l1
        else:
            if l1.val<=l2.val:
                l = l1
                l.next = self.mergeTwoLists(l1.next,l2)
            else:
                l = l2
                l.next = self.mergeTwoLists(l1,l2.next)
        return l
