# Data-Structure_HW1_1
#Pat has `n` bags, each containing some marbles. He has `k` additional marbles that he hasn't put into the bags yet. He wants to add some of these marbles (possibly none) to the bags in such a way that the greatest common divisor (GCD) of the number of marbles in the bags is maximized. Note that he does not want to move the marbles that are already in the bags. Since Pat lacks the intelligence to do this on his own, he has asked for your help. Can you assist him?
#code
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

