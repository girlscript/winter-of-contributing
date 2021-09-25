# **Introduction to Infix, prefix & postfix**

<p>Evaluation of arithmetic expression is a application of stacks. Stacks play important role in evaluation of arithmetic expression consists of operands and operators.</p>

`+` , `-` , `*` , `/` are the operators which is used in arithmetic expressions.

Operators Precedence to Evaluate Expression (Highest priority to Lowest priority) :
```
1. $
2. ( ), [ ], { }
3. ^      right ->  left
4. *, /   left  ->  right
5. +, -   left  ->  right
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

Rules to evaluate infix expression :

when we traversing the expression -
- If we get operand in expression, it will push in stack.
- If we get opening parenthesis `(` in expression then operator will push in stack. 
- 

| Infix Expression : (2 + 4) / 5 - 7

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

