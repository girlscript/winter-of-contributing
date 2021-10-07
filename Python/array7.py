x=[45,67,45,89,12,45,66]
print(x)
y=[]
for e in x:
    if e not in y:
        print(e,x.count(e))
        y.append(e)
    
