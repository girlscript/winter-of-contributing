#fibonacci sequence starts with 0
# finding nth fibonacci number using Reccursion
def fibonacci(n):
    if(n==1 or n==2):
        return n-1
    return fibonacci(n-1)+fibonacci(n-2)
n=int(input("enter which fibonacci number do you want : "))
print('fibonacci number is : ',fibonacci(n))
