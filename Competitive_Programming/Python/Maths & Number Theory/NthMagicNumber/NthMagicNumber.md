# N<sup>th</sup> Magic Number

A number that can be represented as a <b>power of 5 or sum of unique powers of 5</b> is called a magic number.

Initial magic numbers are:

<b>5, 25, 30(5+25), 125, 130(5+125), 150(25 + 125), 155(5+25+125), 625, 630(5+625), 650(25+625), 655(5+25+625), 750(125+625), 755(5+125+625), 775(25+125+625), 780(5+25+125+625), 3125, ....</b>

| value of n       | 1 | 2  | 3  | 4   | 5   | 6   | 7   | 8   | 9   | 10  |
|------------------|---|----|----|-----|-----|-----|-----|-----|-----|-----|
| nth magic number | 5 | 25 | 30 | 125 | 130 | 150 | 155 | 625 | 630 | 650 |


Also, for n-values can be represented in binary as 0001(1), 0010(2), 0011(3), 0100(4), 0101(5), ...

| value of n       | 0001 | 0010 | 0011 | 0100 | 0101 | 0110 | 0111 | 1000 | 1001 | 1010 |
|------------------|------|------|------|------|------|------|------|------|------|------|
| nth magic number | 5    | 25   | 30   | 125  | 130  | 150  | 155  | 625  | 630  | 650  |

For example, take n = 0011 i.e. n = 3, so we can get the n<sup>th</sup> magic number in this way,

```
0*pow(5,4) + 0*pow(5,3) + 1*pow(5,2) + 1*pow(5,1) 
= 0 + 0 + 25 + 5 
= 30 
```

## Implementation in Python:

```Python3
def magic_number(n):

	temp = 1
	nth_magic_num = 0

	# Continue till all the bits of n are not zero
	while (n):

		temp = temp*5

		# if the rightmost bit of n is 1
		if (n & 1):
			nth_magic_num += temp

		# right-shift by one bit i.e. it will return half of a given number
		# example:
		#  5 -> 0101
		# 5 >>=1 -> 0010 -> 2
		# or 5 // 2 = 2 
		n >>= 1 # or n = n//2
	
	return nth_magic_num


# Input function
n = 7
print(f"{n}th magic number is {magic_number(n)}.")
```

### Output:

7th magic number is 155.

## Time Complexity:

The time complexity of this algorithm will be <b>O(logn)</b> as everytime we reduce the number by a factor of 2.
