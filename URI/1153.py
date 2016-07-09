# -*- coding: utf-8 -*-

def fatorial(n):
    a = n;
    while n != 1:
        a *= (n -1)
        n -= 1
    return a
    
b = int(input())
print (fatorial(b))