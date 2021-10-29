# First location in which two strings differ

### Description:
To find the first location in which the given two strings differ without using in-built functions.

Given two strings then, the location at which both the string first differs is found and displayed. For example, Consider two strings ***abcd*** and ***abbc***. Here the first difference occurs at location *3*. Similarly for strings ***xxyy*** and ***zxyy*** it is *1*.  
### Key note:
> Write a method ```first_diff``` which returns the first location.  
### Algorithm:
In the below program:  
1. Program returns the index of first location at which the two strings differs.
2. Enter the data into string1, string2.
3. Create a function first_diff and call it i.e. x=first_diff(s1,s2).
4. If two strings are equal, then it returns -1.
5. Otherwise the code executes as shown below,
~~~py
	#If the length of two strings is equal, then apply below code
		if s1[i]!=s2[i]:
			return (i+1)   
	#Otherwise,
		#If the length of s1 is less than s2, then apply code
			while(i<len(s1)):
				if(s1[i]!=s2[i]):
					flag=1
					return(i+1)
				i=i+1
			if(flag==0):
				return(i+1)
		#Otherwise,
			while(i<len(s2)):
				if(s2[i]!=s1[i]):
					flag=1
					return(i+1)
				i=i+1
			if(flag==0):
				return(i+1)
~~~
6. Display the location at which first difference occurs.

### Source Code:
~~~py
	def first_diff(s1,s2):
		if(s1==s2):	#Two strings equal	
			return -1
		else:
			if len(s1)==len(s2):		#Length of two strings equal and strings not equal
				for i in range(len(s1)):
					if s1[i]!=s2[i]:
						return (i+1)
			else:
				if(len(s1)<len(s2)):	#Length of s1 is less than s2
					i=0
					flag=0
					while (i<len(s1)):
						if s1[i]!=s2[i]:
							flag=1
							return (i+1)
						i=i+1
					if(flag==0):
						return(i+1)
				else:		#Length of s2 is less than s1
					i=0
					flag=0
					while (i<len(s2)):
						if s2[i]!=s1[i]:
							flag=1
							return (i+1)
						i=i+1
					if(flag==0):
						return(i+1)


	n=int(input("Enter number of pairs of strings you want to enter:"))
	for i in range(n):
		s1=input("Enter string 1: ")
		s2=input("Enter string 2: ")
		x=first_diff(s1,s2)	#Calls the function
		if(x== -1):	#Strings are equal, returns -1
			print("-strings are identical")
		else:		#Strings are not equal, returns the location
			print("-first difference occurs at location :",x)
~~~
#### Input/Output:  

*Enter the number of pairs of strings:* 5  
*Enter string 1:* apple  
*Enter string 2:* apple  
-strings are identical  
*Enter string 1:* app  
*Enter string 2:* apple  
-first difference occurs at location : 4  
*Enter string 1:* apple  
*Enter string 2:* app  
-first difference occurs at location : 4  
*Enter string 1:* aeple  
*Enter string 2:* apple  
-first difference occurs at location : 2  
*Enter string 1:* apple  
*Enter string 2:* aeple  
-first difference occurs at location : 2
### Time Complexity:
Here time complexity is ***O(n)***.
### Space Complexity:
Here space complexity is ***O(n)*** i.e. Linear Complexity.
### Conclusion:
For given two strings, The location at which the difference occurs is found and displayed to user.
