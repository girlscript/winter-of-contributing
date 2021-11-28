## Line Splicing In C or C++

While writing a program, generally we tend to offer comment concerning the operating of the code within the 
comment section with the assistance of single/double comment line. however we tend to had ne'er thought that
if at the tip of this comment line if we tend to use \(backslash) character then what's going to happen?
The answer of the on top of question is line splice. Lines terminated by a \ area unit spliced along with
following line terribly early within the method of translation.

Actually whenever at the tip of the comment line if we tend to use \(backslash) character then it merges
the immediate next line with current line that makes the printing operation additionally as a comment for the compiler.
To avoid this issue multi-line comment is used.

```cpp

// program for instance the idea of Line splice
#include <stdio.h>
int main()
{
	// Line Splicing\
	printf("Hello GFG\n");
	printf("welcome\n");
	/* Example 2 - each of the below lines are going to be printed*/ \
	printf("Hello\t");
	printf("World");
	return (0);
}

```

## Output:

```

welcome

Hello World

```

## Explanation:
within the on top of program as we are able to see once we use the \(backslash) character
at the tip of comment line. Then following line of code is treated as comment within the program and also
the output is welcome. once we use multiline comment this issue get resolved and each of the below lines of
multiline comment are written.