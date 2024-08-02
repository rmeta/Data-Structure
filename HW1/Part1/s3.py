arr = [0] * 100002
def counter(num):
    d = int(num**(0.5))
    for i in range(1, 1+d):
        if num % i == 0:
            arr[i] += 1
            arr[int(num/i)] += 1
    if d*d == num:
        arr[d] -= 1    

  
def show(num): 
    print(arr[num])
    
n = int(input())

for operation in range(n):
    numb = input()
    a = numb.split()
    number = int(a[0])
    func = int(a[1])
    
    if number == 1:
        counter(func)
        
    if number == 2:
        show(func)
     
        
     