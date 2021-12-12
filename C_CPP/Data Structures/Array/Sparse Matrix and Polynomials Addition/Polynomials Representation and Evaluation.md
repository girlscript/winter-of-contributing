<h1 align="center"><u>Polynomial Representation and Evaluation</u></h1>
<br>

<h2 align="center"><em><u>Polynomials Representation Using Sparse Structures</u></em></h2>

In mathematics, we are very much familier with <strong><em>```Polynomials```</em></strong> name.

> <em> A <strong>Polynomial</strong> is an expression which is composed of <strong>terms</strong>, where terms are composed of <strong>coefficients</strong> and <strong>exponents</strong>.</em>

```
Example:

P(x) = 8(x^3) + 2(x^2) + 5(x) + 7
```

Here, ```P(x)``` represents a polynomial in ```x``` which contains ```4``` terms. Each term is composed of a set of <em>```coefficients```</em> & <em>```exponent```</em> (power of x) - ```{(8,3), (2,2), (5,1), (7,0)}```.

Therefore from here, we can conclude that to represent a <em>```polynomial```</em>, we need three things -

1. <em>```Number of terms```</em>
2. <em>```Coefficient of each term```</em>
3. <em>```Exponent of each term```</em>

So, let us try to represent a <em>```polynomial```</em> using the concept of <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em>.

<hr>

&nbsp; &nbsp;[`↑ Go to Top`](#Polynomial-Representation-and-Evaluation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↓ Polynomial Representation`](#Polynomial-Representation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↓ Addition of Polynomials`](#Addition-of-Polynomials)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`Go to Sparse Matrix →`](Introduction%20to%20Sparse%20Matrix.md)

<hr><br>

<h2 align="center"><em><u>Polynomial Representation</u></em></h2>

If we try to recall the concept of matrix representation using <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em>, we were required mainly two things -

1. <em>```Number of element to be stored```</em>
2. <em>```Information about those elements (row, column, value)```</em>

Therefore, using the same analogy, we can say that a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> can be represented using the concept of <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em> - 

1. <em>```Number of terms```</em>
2. <em>```Information about terms (coefficient & exponent)```</em>

Let us now represent a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> using concept of <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em> -


Consider a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> -
```
P(x) = 7(x^3) + 9(x^2) + 8(x) + 9
```

We need a structure that stores information about the terms of <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> -

```C
struct terms
{
    int coefficient;    // variable to store value of coefficient
    int exponent;       // Variable to store power of 'x'
};
```

Now, we need another structure to store the terms of the <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> -

```C
struct polynomial
{
    int number_of_terms;    // Variable to store number of terms in polynomial
    struct terms *t;        // Pointer variable to store information about every terms
};
```

<br>

<p align="center"> <img src="https://user-images.githubusercontent.com/87887741/134782488-c7daa706-5935-480c-b62b-8d880ae0369b.png" height="350"> </p>

<br>

These structures are analogus to the structures that we have used to represent a <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em>. Therefore, using these two structures, we can represent a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em>.

<br>

```Code Snippet:```

```C
/* Structure declarations for storing term of polynomial */

struct term
{
    int coefficient;    // Variable to store coefficient
    int exponent;       // Variable to store exponent
};


struct polynomial
{
    int no_of_terms;    // Variables to store number of terms
    struct term *t;     // Pointer varibale to store all the terms
};


/* Function to create a new polynomial */

void create(struct polynomial *p)
{
    printf("Number of terms -> ");
    scanf("%d", &p->no_of_terms);

    p->t = (struct term *)malloc(p->no_of_terms * sizeof(struct term));     // Allocation of memeory for total terms

    printf("\n");

    /* Loop to input terms of polynomial */

    for (int i = 0; i < p->no_of_terms; i++)
    {
        printf("Term %d:\n", (i + 1));

        printf("Coefficient --> ");
        scanf("%d", &p->t[i].coefficient);

        printf("Exponent    --> ");
        scanf("%d", &p->t[i].exponent);

        printf("\n");
    }
}


/* Function definition to display a polynomial */

void display(struct polynomial p)
{
    /* First term of polynomial */
    
    if((p.t[0].exponent) == 0)
    {
        printf("P(x) = %d", p.t[0].coefficient);
    }
    else
    {
        printf("P(x) = %d(x^%d) ", p.t[0].coefficient, p.t[0].exponent);
    }
    

    /* Loop to display rest of the terms of polynomial */

    for (int i = 1; i < p.no_of_terms; i++)
    {
        if((p.t[i].exponent) == 0)
        {
            printf("+ %d ", p.t[i].coefficient);
        }
        else
        {
            printf("+ %d(x^%d) ", p.t[i].coefficient, p.t[i].exponent);
        }
    }
}
```

<hr>

&nbsp; &nbsp;[`↑ Go to Top`](#Polynomial-Representation-and-Evaluation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↑ Polynomial Representation`](#Polynomial-Representation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↓ Addition of Polynomials`](#Addition-of-Polynomials)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`Go to Sparse Matrix →`](Introduction%20to%20Sparse%20Matrix.md)

<hr><br>

<h2 align="center"><em><u>Addition of Polynomials</u></em></h2>

Till now, we have discussed how we can store and represent a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> using the concept of <em>[`sparse matrix`](Introduction%20to%20Sparse%20Matrix.md)</em>. Now, in this section, we will look at the <em>[`addition`](#Addition-of-Polynomials)</em> of two <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em> stored using [`sparse`](Introduction%20to%20Sparse%20Matrix.md) structures.

Let us take two polynomials -
```
P1(x) = 4(x^3) + 5(x^2) + 6(x) + 7
P2(x) = 3(x^3) + 4(x^2) + 2(x) + 2
```

So, when we add ```P1(x)``` and ```P2(x)```, we will get another <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em>, says ```P3(x)```.
```
P3(x) = P1(x) + P2(x)

that is,
P3(x) = 7(x^3) + 9(x^2) + 8(x) + 9
```

<br>

Now, when we are going to add two <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em>, we need to keep a few points in our mind.

> <em> While adding polynomials, we simply add like terms, the terms of the same power.<br><br>
> The maximum possible number of terms in the resulting polynomial can be <strong>No of terms in polynomial 1 + No of terms in polynomial 2</strong>. This is the worst case result, where none of the terms in the polynomials will have same power of <strong>x</strong>.</em>

<br>

Now, let us look at how we can add two <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em> stored using [`sparse`](Introduction%20to%20Sparse%20Matrix.md) structures and generate a third <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em>.

Consider two polynomials -
```
P1(x) = 5(x^4) + 2(x^2) + 5 (number of terms = 3)

P2(x) = 6(x^4) + 5(x^3) + 9(x^2) + 2(x) + 3 (number of terms = 5)
```

This the way how we represent <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em>. But when working with programs, our program has a different representation of these <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em>.

So, our program should add these two <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em> and get a third <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em>, ```P3```.

<br>

So the first thing is - <em>```Total how many terms will be there in P3(x).```</em>

As we can see, ```P1(x)``` contains ```3``` terms & ```P2(x)``` contains ```5``` terms. So, in the worst case, maximum ```(3 + 5) = 8``` terms can be possible for ```P3(x)```.
Therfore, we need a <em>[`polynomial`](#Polynomial-Representation-and-Evaluation)</em> which may have ```8``` terms.

```
P3(x) = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 (number of terms = 8)
```

<br>

Now, the second thing is we need to add the terms. For this, we will be checking the exponents of every terms in <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em> ```P1(x)``` & ```P2(x)```.

- If the exponents of term of ```P1(x)``` & ```P2(x)``` are same, simply add the coefficients of both the <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em> for that term and store it in ```P3(x)``` along with exponent value.

- If the exponents of term of ```P1(x)``` is greater than the term of ```P2(x)```, this means ```P2(x)``` doesn't have any term with that exponent. Therefore, simply copy that term of ```P1(x)``` and store it in ```P3(x)``` along with exponent value.

- If the exponents of term of ```P2(x)``` is greater than the term of ```P1(x)```, this means ```P1(x)``` doesn't have any term with that exponent. Therefore, simply copy that term of ```P2(x)``` and store it in ```P3(x)``` along with exponent value.

So, we need to apply the above mentioned points for each terms of ```P1(x)``` & ```P2(x)``` to add and generate ```P3(x)```.
Now, let's write a program to add two <em>[`polynomials`](#Polynomial-Representation-and-Evaluation)</em>.

<br>

<p align="center"> <img src="https://user-images.githubusercontent.com/87887741/134783451-a63d83f9-7991-4eab-939b-996ea755c08a.jpeg" height="400"> </p>

<br>

<h3><em><u>Program to add two polynomials</u></em></h3>

```C
#include <stdio.h>
#include <stdlib.h>

/* Structure declarations for storing term of polynomials */

struct term
{
    int coefficient;    // Variable to store coefficient
    int exponent;       // Variable to store exponent
};


struct polynomial
{
    int no_of_terms;    // Variables to store number of terms
    struct term *t;     // Pointer varibale to store all the terms
};


/* Function to create a new polynomial */

void create(struct polynomial *p)
{
    printf("Number of terms -> ");
    scanf("%d", &p->no_of_terms);

    p->t = (struct term *)malloc(p->no_of_terms * sizeof(struct term));     // Allocation of memeory for total terms

    printf("\n");

    /* Loop to input terms of polynomial */

    for (int i = 0; i < p->no_of_terms; i++)
    {
        printf("Term %d:\n", (i + 1));

        printf("Coefficient --> ");
        scanf("%d", &p->t[i].coefficient);

        printf("Exponent    --> ");
        scanf("%d", &p->t[i].exponent);

        printf("\n");
    }
}


/* Function definition to display a polynomial */

void display(struct polynomial p)
{
    /* First term of polynomial */
    
    if((p.t[0].exponent) == 0)
    {
        printf("%d", p.t[0].coefficient);
    }
    else
    {
        printf("%d(x^%d) ", p.t[0].coefficient, p.t[0].exponent);
    }
    

    /* Loop to display rest of the terms of polynomial */

    for (int i = 1; i < p.no_of_terms; i++)
    {
        if((p.t[i].exponent) == 0)
        {
            printf("+ %d ", p.t[i].coefficient);
        }
        else
        {
            printf("+ %d(x^%d) ", p.t[i].coefficient, p.t[i].exponent);
        }
    }
}

/* Function to add two polynomials */

struct polynomial *addition (struct polynomial *p1, struct polynomial *p2)
{
    struct polynomial *sum;     // Polynomial variable to store the sum of polynomials
    sum = (struct polynomial *)malloc(sizeof(struct polynomial));   // Memory allocation for polynomial variable

    // Allocation of memeory for total terms
    sum->t = (struct term *)malloc((p1->no_of_terms + p2->no_of_terms) * sizeof(struct term));

    int i = 0, j = 0, k = 0;    // Index pointers for p1, p2 & sum polynomial variables

    /* Loop to add polynomials */

    while ((i < p1->no_of_terms) && (j < p2->no_of_terms))
    {
        if ((p1->t[i].exponent) > (p2->t[j].exponent))  // Addition condition 2
        {
            sum->t[k++] = p1->t[i++];
        }  
        else if ((p1->t[i].exponent) < (p2->t[j].exponent)) // Addition condition 3
        {
            sum->t[k++] = p2->t[j++];
        }
        else    // Addition condition 1
        {
            sum->t[k].exponent = p1->t[i].exponent;
            sum->t[k++].coefficient = (p1->t[i++].coefficient) + (p2->t[j++].coefficient);
        }
    }

    /* Loop to add remaining terms of polynomial 1, if any */

    for (; i < p1->no_of_terms; i++)
    {
        sum->t[k++] = p1->t[i];
    }
    
    /* Loop to add remaining terms of polynomial 1, if any */

    for (; j < p2->no_of_terms; j++)
    {
        sum->t[k++] = p2->t[j++];
    }

    sum->no_of_terms = k;

    return sum;
}


int main()
{
    struct polynomial p1, p2, *p3;

    printf("Polynomial 1:\n");
    create(&p1);
    printf("\n");

    printf("Polynomial 2:\n");
    create(&p2);
    printf("\n");

    p3 = addition(&p1, &p2);

    printf("P1(x) = ");
    display(p1);

    printf("P2(x) = ");
    display(p2);

    printf("\n");

    printf("P3(x) = ");
    display(*p3);

    printf("\n");
    return 0;
}
```
```
Output:

Polynomial 1:
Number of terms -> 3

Term 1:
Coefficient --> 5
Exponent    --> 4

Term 2:
Coefficient --> 2
Exponent    --> 2

Term 3:
Coefficient --> 5
Exponent    --> 0


Polynomial 2:      
Number of terms -> 5

Term 1:
Coefficient --> 6
Exponent    --> 4

Term 2:
Coefficient --> 5
Exponent    --> 3

Term 3:
Coefficient --> 9
Exponent    --> 2

Term 4:
Coefficient --> 2
Exponent    --> 1

Term 5:
Coefficient --> 3
Exponent    --> 0


P1(x) = 5(x^4) + 2(x^2) + 5
P2(x) = 6(x^4) + 5(x^3) + 9(x^2) + 2(x^1) + 3

P3(x) = 11(x^4) + 5(x^3) + 11(x^2) + 2(x^1) + 8
```

<hr>

&nbsp; &nbsp;[`↑ Go to Top`](#Polynomial-Representation-and-Evaluation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↓ Polynomial Representation`](#Polynomial-Representation)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`↑ Addition of Polynomials`](#Addition-of-Polynomials)
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;[`Go to Sparse Matrix →`](Introduction%20to%20Sparse%20Matrix.md)