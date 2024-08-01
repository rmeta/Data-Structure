
#Popeye, who is very interested in strings, has recently read about palindrome strings. A string is a palindrome if it reads the same from both sides, such as "aba". He likes this property and wants to test it on various strings. To make the challenge more interesting, he wants to check if a string can be turned into a palindrome by adding exactly one character (any lowercase English letter) at any position in the string. Can you help him?
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
