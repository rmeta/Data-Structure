n = int(input())
for case in range(n):
    w = input()
    answer = False
    for i in range(len(w) + 1):
        for c in range(26):
            t = w[:i] + chr(ord('a') + c) + w[i:]
            answer = answer or t == t[::-1]
    if answer:
        print("YES")
    else:
        print("NO")
