## Maps ##

### Map is derived from mapping. We can define maps as an associative structure which *connects* or *maps* some value or entry to a *key*.
### Maps have various implementations such as hashmap, for example.
### It can be used for reducing lookup time.
### While in C++ there is a seperate class, in C we have to make our own structures to implement it. Which is what I have done.

<br>

### ***I have done a very basic implementation.***

<br>

### In this code, I have done a simple problem of finding the name from the telephone number associated with it. 
### We could do a simple linear search, however that gives O(n) time complexity which is not feasible for large entries; whereas employing a map helps us solve the problem in an average case of O(1).
### In this problem we have
``` 
typedef struct Map
{
    long long int telno;
    char name[7];
}Map;
```

### The *telno* is used to get a key for the hashmap used using a suitable hash function.

### This problem then maps the telephone no. to the name of an entry. 

[Maps in C](https://github.com/a-rcane/winter-of-contributing/blob/C_CPP/C_CPP/Introduction%20of%20C/maps.c)
