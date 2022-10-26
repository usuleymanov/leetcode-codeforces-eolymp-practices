# -*- coding: utf-8 -*-
"""
Created on Wed Jul 14 16:42:29 2021

@author: u.suleymanov
"""
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
l1 = ListNode(5, ListNode(4, ListNode(3)))
l2 = ListNode(5, ListNode(6, ListNode(4)))

l1 = ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9)))))))
l2 = ListNode(9, ListNode(9, ListNode(9, ListNode(9))))

def print_my_list(l1):
    if l1:
        print(l1.val, end = "_")
        print_my_list(l1.next)

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1.next is None and l2.next is None:
            my_int = l1.val + l2.val
            # print(my_int)
            if my_int > 9:
                return ListNode(my_int%10, ListNode(my_int//10))
            return ListNode(my_int)
        
        if l1.next is None:
            l1.next = ListNode(0)
        if l2.next is None:
            l2.next = ListNode(0)
            
       
        l1.next.val += (l1.val + l2.val)//10
            
        return ListNode((l1.val + l2.val)%10, self.addTwoNumbers(l1.next, l2.next))
    
s = Solution()
b = s.addTwoNumbers(l1, l2)
print_my_list(b)


9 9 9 9 9 9
9 9 9