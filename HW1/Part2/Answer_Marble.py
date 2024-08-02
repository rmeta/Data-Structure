def ints():
  return [int(x) for x in input().split()]
  
n, k = ints()
a = ints()

def solve(a, k, t):
  used = 0
  for bag in a:
    if bag % t != 0:
      neededMarbles = t - (bag % t);
      used += neededMarbles
  return used <= k

for target in range(1, 2010):
  if solve(a, k, target):
    answer = target

print(answer)
