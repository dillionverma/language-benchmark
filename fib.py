#!/usr/bin/python
import sys

def fib(n):
    if n <= 1: return n
    return fib(n-1) + fib(n-2)

n = int(sys.argv[1])
print fib(n)
