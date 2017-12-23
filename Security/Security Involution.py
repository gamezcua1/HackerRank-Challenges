n = input()
x = map(int, raw_input().split())

for i in range(0,n):
    if i+1 != x[x[i]-1]:
        print 'NO'
        exit(0)
print 'YES'