DICTIONARIES
It is a important data structure in python in which it stores values as a pair o key and value each key has seperated from its value by a colon (:) and consecutive are seperated by commas

CREATE A DICTIONARY

SYNTAX OF DICTIONARY

dictionary_name=[]
dictionary_variable={key1 : val1 ,key2 : val2 ,....}

let us see an example
code:
dict={}
print(dict)
Output:
{}

ACCESSING VALUES

to access values in a dictionary square brackets are used along with key to obtain its value
 
 Example
 dict={'rollno':'1002'  , 'name':'gwoc' ,'course':'opensource'}
 print("dict['rollno'] =", dict['rollno'])
 print("dict['name'] =" , dict['name'])
 print("dict['course'] = ",dict['course'])

 Output
 dict[rollno] = 1002
 dict[name] = gwoc
 dict[course] = opensource

ADDING AND MODIFING AN ITEM
to add a new entry we have to just specify the key-value pairs as you had done for existing pairs

Example
dict={'rollno':'1002'  , 'name':'gwoc' ,'course':'opensource'}
 print("dict['rollno'] =", dict['rollno'])
 print("dict['name'] =" , dict['name'])
 print("dict['course'] = ",dict['course'])
dict['source'] ='github'          #new entry
print("dict[source] = ",dict['source'] )

Output
dict[rollno] = 1002
 dict[name] = gwoc
 dict[course] = opensource
 dict[source] = github

 Modifying an Entry
 just over writing an exising one

 Example
 dict={'rollno':'1002'  , 'name':'gwoc' ,'course':'opensource'}
 print("dict['rollno'] =", dict['rollno'])
 print("dict['name'] =" , dict['name'])
 print("dict['course'] = ",dict['course'])
dict['course'] = 'python'  #modified

Output
dict[rollno] = 1002
 dict[name] = gwoc
 dict[course] = python

DELETING ITEMS
you can delete one or more items by using del keyword

EXAMPLE
dict={'rollno':'1002'  , 'name':'gwoc' ,'course':'opensource'}
 print("dict['rollno'] =", dict['rollno'])
 print("dict['name'] =" , dict['name'])
 print("dict['course'] = ",dict['course'])
del dict['course']  #deleting 

OUTPUT
dict[rollno] = 1002
 dict[name] = gwoc

SORTING ITEMS 
the sorted function is to sort the keys

EXAMPLE
dict={'rollno':'1002'  , 'name':'gwoc' ,'course':'opensource'}
print(sorted(dict.keys()))

OUPUT
['course' , 'name' ,'rollno']


SET

set iss another daa structure they are same as lists with no duplicates

CREATE A SET
it is created by placing all the values in curly braces

EXAMPLE
thisset = {"apple", "banana", "cherry"}
print(thisset)

SET OPERATIONS

LENGTH OF SET
To determine how many items a set has, use the len() method.

Example
Get the number of items in a set:
thisset = {"apple", "banana", "cherry"}
print(len(thisset))

SET ITEMS
Set items can be of any data type:
Example
String, int and boolean data types:
set1 = {"apple", "banana", "cherry"}
set2 = {1, 5, 7, 9, 3}
set3 = {True, False, False}

SET TYPE
type()
From Python's perspective, sets are defined as objects with the data type 'set':
<class 'set'>
Example
What is the data type of a set?
myset = {"apple", "banana", "cherry"}
print(type(myset))
