t = int(input())
for i in range(t):
    s = input()
    zero , one = s.count('0'), s.count('1')
    # print(z, o)
    if zero == one:
        print(0)
    else:
        for i in range(len(s)):
            if s[i] == '0' and zero > 0:
                one -= 1
            elif s[i] == '1' and one > 0:
                zero -= 1
            else:
                break
        print(max(zero, one))