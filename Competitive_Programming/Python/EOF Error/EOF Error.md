# How to overcome EOF Error in **Competitive Programming**



[![image](https://res.cloudinary.com/practicaldev/image/fetch/s--Iq8OOLss--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/t0wox8ydnvia5f0fankb.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--Iq8OOLss--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/t0wox8ydnvia5f0fankb.png)

[![image](https://res.cloudinary.com/practicaldev/image/fetch/s--wIRpKY_N--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/asqw4ut2g7m1612lwkye.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--wIRpKY_N--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/asqw4ut2g7m1612lwkye.png)

So as we can see in the pictures above, despite having produced the expected output, our test case fails due to a runtime error **EOFError** == **End of File Error**. Let's understand what is EOF and how to tackle it.

### What is EOF Error

In Python, an **EOFError** is an exception that gets raised when functions such as input() or raw_input() in case of python2 return end-of-file (EOF) without reading any input.

### When can we expect EOF Error : 

We can expect **EOF** in few cases which have to deal with input() / raw_input() such as:

- Interrupt code in execution using `ctrl+d` when an input statement is being executed as shown below
  [![image](https://res.cloudinary.com/practicaldev/image/fetch/s--k9OZ26qV--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/prvwhru3jhw90b6wn88m.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--k9OZ26qV--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/prvwhru3jhw90b6wn88m.png)
  
- Another possible case to encounter EOF is, when we want to take *some* number of inputs from user i.e., we do not know the exact number of inputs; hence we run an infinite loop for accepting inputs as below, and get a Traceback Error at the very last iteration of our infinite loop because user does not give any input at that iteration


```
n=int(input())
if(n>=1 and n<=10**5):
    phone_book={}
    for i in range(n):
        feed=input()
        phone_book[feed.split()[0]]=feed.split()[1]
    while True:
        name=input()
        if name in phone_book.keys():
            print(name,end="")
            print("=",end="")
            print(phone_book[name])
        else:
            print("Not found")
```



The code above gives **EOFError** because the input statement inside `while` loop raises an exception at last iteration


**Note :** Do not worry if you don't understand the code or don't get the context of the code, its just a solution of one of the problem statements on HackerRank 30 days of code challenge which you might want to [check](https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem)

The important part here is, that I used an infinite while loop to accept input which gave me a runtime error.


### How  to  tackle  **EOFError** :


We can catch **EOFError** as any other error, by using try-except blocks as shown below :


```
try:
    input("Please enter something")
except:
    print("EOF")
```



You might want to do something else instead of just printing "**EOF**" on the console such as:


```
n=int(input())
if(n>=1 and n<=10**5):
    phone_book={}
    for i in range(n):
        feed=input()
        phone_book[feed.split()[0]]=feed.split()[1]
    while True:
        try:
            name=input()
        except EOFError:
            break
        if name in phone_book.keys():
            print(name,end="")
            print("=",end="")
            print(phone_book[name])
        else:
            print("Not found")
```



In the code above, python exits out of the loop if it encounters **EOFError** and we pass our test case, the problem due to which this discussion began...


[![image](https://res.cloudinary.com/practicaldev/image/fetch/s--IC-w3_P5--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/nmlt8x65v42bl926l5a4.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--IC-w3_P5--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/nmlt8x65v42bl926l5a4.png)
