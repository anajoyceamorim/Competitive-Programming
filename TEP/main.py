x = input()
m = int(input())

d = int(max(list(x)))

l = d+1
r = 36

while(l < r):
    mind = (l + r) // 2
    if(int(x, mind) > m):
        r = mind - 1
    else:
        l = mind + 1

print(d-min(l,r))
