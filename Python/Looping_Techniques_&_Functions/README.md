# Looping Techniques & Functions #3944
In **looping techniques**, we will discuss different functions that can be used accordingly in different scenarios, like looping through dictionaries etc.
##Functions covered are:
-  zip()
- enumerate()
- reversed()
- sorted()
- set()
- sorted() in combination with set()
- iteritem()
- items()

# 1.) iteritems():
When looping through dictionaries, in key & value pairs the key and value both can be fetched together at the same time using iteritems() method.
```python
# Say we have dictionary mentioning different fruits and their colour.
fruits_colors = { 'banana' : 'yellow', 'orange' : 'orange',  'cherry' : 'red' }
for k, v in fruit_colors.iteritems():   #k here represents the key and v represents the corresponding value.
	print(k,v)

#output :  banana yellow
#	   orange orange
#   	   cherry red 

```

# 2.) items():
items() performs the similar task on dictionary as iteritems() when looping through dictionaries.
```python
# Say we have dictionary mentioning different fruits and their colour.
fruits_colors = { 'banana' : 'yellow', 'orange' : 'orange',  'cherry' : 'red' }
for k, v in fruit_colors.items():   #k here represents the key and v represents the corresponding value.
	print(k,v)

#output :  banana yellow
#	   orange orange
#   	   cherry red 

```
**Note:** 
**items()** function has a few **disadvantages**  to it as well when compared with iteritems() :
-	**Very time consuming** : If called on large dictionaries unlike the one we saw above, it will consume a lot of time.
-	**Lots of memory consumed**: It sometimes takes 2 times the memory than usual when implemented on a dictionary.

# 3.) enumerate():
enumerate() is used to loop through a sequence or the containers and print the index number along with the value present at that particular index.
```python
# Say we have list mentioning a few famous sitcoms.
sitcoms = ['The Big Bang Theory' , 'The office' , 'Young Sheldon', 'Brooklyn Nine 9']
for key, value in enumerate(sitcoms):   
#note its not necessary to assign the list to a variable and the complete list can directly be placed instead of writing variable name 'sitcoms' eg., enumerate(['The Big Bang Theory' , 'The office' , 'Young Sheldon', 'Brooklyn Nine 9'])
	print(key,value)

#output :  0 The Big Bang Theory
#	   1 The office
#   	   2 Young Sheldon
#  	   3 Brooklyn Nine 9
```
# 4.) zip():
zip() is used to loop over two or more sequences at the same time. It does this by combining 2 similar containers(list-list or dict-dict) and sequentially printing the values. The loop exists till the smaller container ends.
```python
# Say we have two lists , list 1 mentioning famous anime characters and list 2 mentioning their corresponding animes
characters  = ['Uzumaki Naruto' , 'Keniki' , 'Light Yagami', 'Saitama']
animes = ['Naruto Shippudden' , 'Tokyo Ghoul' , 'Death Note' , 'One Punch Man'] 

#using zip() to combine two containers and printing values
for cha, ani in zip(characters, animes): #here cha and ani are just variables and can be names anything else you want
	print('{0} is the main character of {1} .'.format(cha, ani))
	
	
	
#output :  Uzumaki Naruto is the main character of Naruto Shippudden .
#	   Keniki is the main character of Tokyo Ghoul .     
#   	   Light Yagami is the main character of Death Note.
#  	   Saitama is the main character of One Punch Man .

```
What exactly is happening here ??
**zip()** function is merging the two lists, like in the above example  zip(characters, animes) is creating a new list like this :
[('Uzumaki Naruto', 'Naruto Shippudden'),( 'Keniki', 'Tokyo Ghoul'),( 'Light Yagami', 'Death Note'),( 'Saitama', 'One Punch Man')]
Our program has created an array of **tuple items** inside a **list**. Each tuple contains the name of a character and the respective anime.

# 5.) reversed():
**reversed()** is used to print the values of a sequence/container in reversed order that is last to first, but the thing to keep in mind is that reversed() does not reflect any changes to the original list.
```python
# eg below
numbers = [1 , 2 , 3 , 4 , 5 , 6]
for i in reversed(numbers):
	print(i)
#output : 6
#	  5
#   	  4
#  	  3
#	  2
#   	  1

#Say we wanna print the entire list in one line then we can write
for i in reversed(numbers):
	print(i, end=" ")
#output : 6 5 4 3 2 1 
```
# 6.) sorted():
**sorted()** is used to loop over and to print the container is sorted order. It doesn't sort the container but just prints the container in sorted order for an instance without reflecting any changes to the original list.
```python
# eg., below
numbers = [1 , 4 , 6 , 2 , 5 , 3, 2]
for i in sorted(numbers):
  print (I , end=" ")

#output :  1 2 2 3 4 5 6
```
# 7.) set():
**set()** is used on a sequence to eliminate duplicate elements.
```python
# eg., below
colors = ['yellow' ,  'red' , 'green' , 'blue' , 'red' , 'brown']
for f in set(colors):
	print(f)
#output :   brown
#	    red   
#     	    yellow
#     	    blue  
#           green
```
As you can see the 'red' was not repeated twice. 

# 8.) sorted() in combination with set():
The use of **sorted()** in combination with **set()** over a sequence is an idiomatic way to loop over unique elements of the sequence in sorted order.
```python
# eg., below
numbers = [1 , 4 , 6 , 2 , 5 , 3, 2]
for t in sorted(set(numbers)):
	print(f)
#output :  1
#	   2   
#     	   3
#     	   4  
#          5
#          6  
```
As you can see the list was printed in without any duplicates and also in a sorted manner.















 
