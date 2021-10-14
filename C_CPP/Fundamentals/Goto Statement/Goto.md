# GOTO STATEMENT IN C/CPP

## What is a goto statement?<br>
Goto is actually a jump statement in C and CPP. It is used to transfer the control of the program from one part of the program to another.

Let us look at the syntax of the goto statement,<br>
```
		label:
		.
		.
		.
		.
		goto label;
```

In the above syntax there is a label, followed by a few lines of code. As the goto statement is encountered the control of the program is taken back to the 
line containing the label. <br>
Here is another way of writing the goto statement:
```
		goto label:
		.
		.
		.
		.
		label:
```
Here too, the goto statement takes the control to the label after encountering the goto statement.

Let us look at a simple program using the goto statement to cleary understand the program flow.

```CPP
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int x;
        label: 
        cin>>x;
        if(x>5)
        cout<<"Goto is fun\n";
        else
        goto label;
        return 0;
    }
```

### OUTPUT:
```
    3
    7
    Goto is fun
```
### EXPLANATION:

Here, an integer `x` is taken as input. If is greater than 5 then the statement `Goto is fun` is printed, else the control is taken back to the label. So, the value of `x` will once again be taken as input, and the conditional statements will once again be checked.<br>
Now, in this program too at first 3 is entered which is less than 5 so the else is satisfied and the control will go to `label`. There once again input is taken which is 7 this time. The if condition is satisfied and `Goto is fun` is printed.

Let us now look at a C question to print the numbers from 1 to n implementing the goto statement.

```C
    #include<stdio.h>

    int main()
    {
        int n, p=1;
        printf("Range: ");
        scanf("%d", &n);
        La:
            printf("%d ",p);
            p++;
            if (p <= n)
                goto La;
            else
                exit(1);
        return 0;
    }
```

### OUTPUT:

```
Range: 5
1 2 3 4 5 
```

Here, `La` is the name of the label.

Let us see a `goto` program using the second syntax.
```CPP
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin>>n;
        if(n)
            goto p;
        else
            goto k;
            
        p: cout<<"true value"; exit(1);
        k: cout<<"false value";
        return 0;
    }
```
### OUTPUT:
```
    1
    true value
```

### EXPLANATION:

Here, as the value is 1 the if condition is satisfied the control comes to the label p and prints the statement after which the program ends.

### ADVANTAGES OF GOTO STATEMENT:
- It helps to re-use a piece of code.
- It is time saving under certain situations.

### DISADVANTAGES OF GOTO STATEMENT:
- It makes it very difficult to dry run a program.
- It also makes it very difficult to find errors within a program.

### ALTERNATIVES:
- Functions can be used in place of `goto` statement to re-use a piece of code.
- Other jump statements such as `break` and `continue` can be used in place of `goto` by making a little alteration in the program logic.

So, we can see that the `goto` statement has several advantages as well as disadvantages. There are also various alternatives to this `goto` statement.