# -*- coding: utf-8 -*-
"""
Created on Fri Jul 16 11:50:59 2021

@author: u.suleymanov
"""
def reverse(x: int) -> int:
    x = str(x)[::-1]
    x = "-" + x[:-1] if x[-1] == "-" else x
    return int(x) if -2**31 <=int(x) <= 2**31 -1 else 0

reverse(210)
