# Understanding Pickling in Python

## Video Link : [Understanding Pickling in Python](https://drive.google.com/file/d/1T3vKLmvyhdUbGf9O3R8U5Kz2pxox2LDx/view?usp=sharing)

Python pickle module is used for serializing and de-serializing a Python object structure. Any object in Python can be pickled so that it can be saved on disk. What pickle does is that it “serializes” the object first before writing it to file. Pickling is a way to convert a python object (list, dict, etc.) into a character stream. The idea is that this character stream contains all the information necessary to reconstruct the object in another python script.

![image](https://user-images.githubusercontent.com/63282184/144064154-940b1f61-e054-41ef-b225-1de5a24967bd.png)


## Example 
```

# Python3 program to illustrate store
# efficiently using pickle module
# Module translates an in-memory Python object
# into a serialized byte stream—a string of
# bytes that can be written to any file-like object.

import pickle

def storeData():
	# initializing data to be stored in db
	Omkar = {'key' : 'Omkar', 'name' : 'Omkar Pathak',
	'age' : 21, 'pay' : 40000}
	Jagdish = {'key' : 'Jagdish', 'name' : 'Jagdish Pathak',
	'age' : 50, 'pay' : 50000}

	# database
	db = {}
	db['Omkar'] = Omkar
	db['Jagdish'] = Jagdish
	
	# Its important to use binary mode
	dbfile = open('examplePickle', 'ab')
	
	# source, destination
	pickle.dump(db, dbfile)					
	dbfile.close()

def loadData():
	# for reading also binary mode is important
	dbfile = open('examplePickle', 'rb')	
	db = pickle.load(dbfile)
	for keys in db:
		print(keys, '=>', db[keys])
	dbfile.close()

if __name__ == '__main__':
	storeData()
	loadData()
```

Output 

```

omkarpathak-Inspiron-3542:~/Documents/Python-Programs$ python P60_PickleModule.py
Omkar => {'age': 21,  'name': 'Omkar Pathak',  'key': 'Omkar',  'pay': 40000}
Jagdish => {'age': 50,  'name': 'Jagdish Pathak',  'key': 'Jagdish',  'pay': 50000}

```

### Pickling without a file

```
# initializing data to be stored in db
Omkar = {'key' : 'Omkar', 'name' : 'Omkar Pathak',
'age' : 21, 'pay' : 40000}
Jagdish = {'key' : 'Jagdish', 'name' : 'Jagdish Pathak',
'age' : 50, 'pay' : 50000}

# database
db = {}
db['Omkar'] = Omkar
db['Jagdish'] = Jagdish

# For storing
b = pickle.dumps(db)	 # type(b) gives <class 'bytes'>

# For loading
myEntry = pickle.loads(b)
print(myEntry)
```
## Pickle Exceptions
Below are some of the common exceptions raised while dealing with pickle module −

- Pickle.PicklingError: If the pickle object doesn’t support pickling, this exception is raised.

- Pickle.UnpicklingError: In case the file contains bad or corrupted data.

- EOFError: In case the end of file is detected, this exception is raised.

## Pros:

- Comes handy to save complicated data.

- Easy to use, lighter and doesn’t require several lines of code.

- The pickled file generated is not easily readable and thus provide some security.

## Cons:

- Languages other than python may not able to reconstruct pickled python objects.

- Risk of unpickling data from malicious sources.

## Advantages and conclusion 

- Recursive objects (objects containing references to themselves): Pickle keeps track of the objects it has already serialized, so later references to the same object won’t be serialized again. (The marshal module breaks for this.)
- Object sharing (references to the same object in different places): This is similar to self- referencing objects; pickle stores the object once, and ensures that all other references point to the master copy. Shared objects remain shared, which can be very important for mutable objects.
- User-defined classes and their instances: Marshal does not support these at all, but pickle can save and restore class instances transparently. The class definition must be importable and live in the same module as when the object was stored.
