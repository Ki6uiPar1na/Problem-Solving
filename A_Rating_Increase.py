t = int(input())
s1 = s2 = ""
for i in range(t):
    s = input()
    for i in range(len(s) - 1):
        if(s[i] != '0' and s[i + 1] == '0'):
            s1 += s[i]
        
        elif(s[i] == '0' and s[i + 1] == '0'):
            s1 += s[i]
        
        else:
            s1 += s[i]
            break;
    # print(s1, end = " ")
    s2 = s[len(s1) : ]
    # print(s2)
    n1 , n2 = int(s1), int(s2)
    if n1 >= n2:
        print(-1)
    else:
        print(f"{n1} {n2}")
    s1 = s2 = ""
        