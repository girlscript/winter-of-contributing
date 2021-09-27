# **Introduction to Infix, prefix & postfix**

<p>Evaluation of arithmetic expression is a application of stacks. Stacks play important role in evaluation of arithmetic expression consists of operands and operators.</p>

`+` , `-` , `*` , `/` are the operators which is used in arithmetic expressions.

Operators Precedence to Evaluate Expression (Highest priority to Lowest priority) :
``` 
1. (), [], {}
2. ^      right ->  left
3. *, /   left  ->  right
4. +, -   left  ->  right
```

### Different Arithmetic Expressions :
- Infix Expression
- Prefix Expression
- Postfix Expression

***

## Infix Expression (Infix Notation)

- While writing an arithmetic expression, the operator is placed in between two operands.
- To override the priorities of operand, we use a pair of parentheses as shown in below examples.

Format : `<operand>` `<operator>` `<operand>`

```
e.g.

5 * 4
A + B * C - D
(2 + 4) / 5 - 7
```

### Evaluation of Infix Expression

Rules :

when we traversing the expression -
- If we get operand in expression, it will push in stack.
- If we get opening `(` parentheses in expression, it will push in stack. 
- If we get closing `)` parentheses in expression then it will pop all operators(`+` , `-` , `*` , `/`) untill not get opening `)` parentheses and at last opening`(` and closing `)` parentheses also pop.
- If we get any operator(`+` , `-` , `*` , `/`), it will pop greater than or equal priority operators(`+` , `-` , `*` , `/`) untill not get opening parentheses `(`.

e.g.

Infix Expression : `( 2 + 4 ) / 5 - 7`

<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/134872097-5b7b6d64-c0ea-442d-ab5a-74eee5eb17da.png" width="600" height="350">
</p>

Output : `-6`

***

## Prefix Expression (Polish Notation)

While writing an arithmetic expression, the operator comes before the two operands.

Format : `<operator>` `<operand>` `<operand>` 

```
e.g.

* / 1 2 3
+ A - * B C D
- / + 2 4 5 7
```

### Evaluation of Prefix Expression

Rules :

In Prefix, we traversing the expression from the end -
- If we get operand in expression, it will push in stack.
- If we get operator(`+` , `-` , `*` , `/`) , it will pop two last operand from the stack and perform the arithmetic operation.
- Then push the result in stack and print the output

e.g.

Prefix Expression : `- + 4 * 2 8 + 9 6`

<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/134878797-676f0bc2-bfe2-4c62-abff-7c378bdc0925.png" width="600" height="350">
</p>

Output : `5`                                                                                                                   

***


## Postfix Expression (Postfix Notation)

While writing an arithmetic expression, the operator comes after the two operands.

Format : `<operand>` `<operand>` `<operator>`

```
e.g.

* 1 2 3 /
A + B C D * - 
/ - 2 4 5 7 +
```

### Evaluation of Postfix Expression

Rules :

In Postfix, when we traversing the expression -
- If we get operand in expression, it will push in stack.
- If we get operator(`+` , `-` , `*` , `/`) , it will pop two last operand from the stack and perform the arithmetic operation.
- Then push the result in stack and print the output

e.g.

Postfix Expression : `8 2 + 6 / 2 * 4 +`

<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/134880739-e989e876-24ef-4026-9333-a8fe54ad0f54.png" width="600" height="350">
</p>

Output : `6`

***
