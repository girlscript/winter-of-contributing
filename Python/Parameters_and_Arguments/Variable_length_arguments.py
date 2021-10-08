def sum(*n):
    total=0
    for i in n:
        total = total+i
    print("the sum =",total)

sum()
sum(20)
sum(20,30)
sum(10,20,30,40)
