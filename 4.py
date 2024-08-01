n = int(input())
arr = [int(x) for x in input().split()]
m = list(input())

reward = 0
for ri in range(n):
  index = n - 1 - ri
  
  if m[index] == '1' and reward > arr[index]:
    reward = max(0, arr[index])
    m[index] = 'x'
  
  if m[index] == '0' and arr[index] > 0:
    reward = reward + arr[index]

# print(m)
pos = "".join(m).find('x')

if pos != -1:
  m[pos] = '0'
  for i in range(pos + 1, n):
    if arr[i] >= 0:
      m[i] = '1'
    else:
      m[i] = '0'

print("".join(m))

# calculate the actual f(x)
total = 0
for i in range(n):
  if m[i] == '1':
    total = total + arr[i]

print(total)
