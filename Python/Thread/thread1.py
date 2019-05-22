#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May 22 20:28:52 2019

@author: brgupta
"""

from threading import Thread

def fun1(a,b):
    print(a,b)
    
def fun2(a,b):
    if a%2==0 and b%2==0:
        print("a and b both are even")
    else:
        print("Both are not even")
        
th1 = Thread(target=fun1,args=(2,4),name='t1')
th2 = Thread(target=fun2,args=(6,8),name='t2')

th1.start()
th2.start()

th1.join()
th2.join()
