#!/bin/python3

import sys


n,m = input().strip().split(' ')
n,m = [int(n),int(m)]

print (int((n+n%2)*(m+m%2)/4))