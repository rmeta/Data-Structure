# Data-Structure_HW1_1
#Pat has `n` bags, each containing some marbles. He has `k` additional marbles that he hasn't put into the bags yet. He wants to add some of these marbles (possibly none) to the bags in such a way that the greatest common divisor (GCD) of the number of marbles in the bags is maximized. Note that he does not want to move the marbles that are already in the bags. Since Pat lacks the intelligence to do this on his own, he has asked for your help. Can you assist him?
#code
Initially, we have an empty set of numbers. In each step, we have a request of one of the following forms:

1. `1 x`

   In this case, `x` is not in our set, and we need to add `x` to the set.

2. `2 x`

   For this request, we need to print how many numbers in the set are divisible by `x`.

The constraints are as follows:
- \(0 < x \leq 10^5\)
- \(0 < n \leq 10^5\)
