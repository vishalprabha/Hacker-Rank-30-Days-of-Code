i = int(input())
for j in range(i):
    l1 = []
    l2 = []
    s = input()
    for k in range(len(s)):
        if(k%2):
            l2.append(s[k])
        else:
            l1.append(s[k])
    print (''.join(l1),''.join(l2))       
