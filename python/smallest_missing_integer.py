# -*- coding: utf-8 -*-
"""
Created on Fri Jul 16 12:50:29 2021

@author: u.suleymanov
"""
def firstMissingPositive(nums) -> int:
    i = 0
    ln = len(nums)
    while i < ln:
        if ln > nums[i] - 1 >= 0:
            if nums[i] == i + 1:
                i += 1
                continue
            a = nums[i] - 1
            if nums[i] == nums[a]:
                nums[i] = -1
            nums[i], nums[a] =  nums[a], nums[i]
        else:
            nums[i] = -1
            i += 1
            
    for i in range(len(nums)):
        if nums[i] == -1:
            return i + 1
    return ln + 1


firstMissingPositive([1, 1])

nums = [1, 1]
i = 0
ln = len(nums)
while i < ln:
    if ln > nums[i] - 1 >= 0:
        if nums[i] == i+1:
            i += 1
            continue
            
        a = nums[i] - 1
        if nums[i] == nums[a]:
            nums[i] = -1
        nums[i], nums[a] =  nums[a], nums[i]
        print(nums[i], i, nums)
    else:
        nums[i] = -1
        i += 1
        
for i in range(len(nums)):
    if nums[i] == -1:
        print( i + 1)
        
        
    