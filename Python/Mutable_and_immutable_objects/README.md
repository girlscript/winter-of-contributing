# Mutable and immutable objects in Python

---
In Python code all the data is represented by objects or by relations between objects. Every object has an `identity`, a `type`, and a `value`.

#### id(object):

Returns the “identity” of an object. This is an integer which is guaranteed to be unique and constant for this object during its lifetime. Two objects with non-overlapping lifetimes may have the same id() value.

**CPython implementation detail:** This is the address of the object in memory.

---

## Mutable objects

A mutable object is one whose value can be changed. Python has the following mutable objects built in: `list`, `dict`, `set` and `byte array`.
So we can change the value of mutable objects, without the object being destroyed and re-created.

Example:

```py
animals_list = ["cat", "dog", "cow", "monkey", "lion", "tiger"]
another_list = animals_list
print("Id of animals list: ",id(animals_list))
print("Id of another list: ",id(another_list))

animals_list += ["zebra"]
print("animals list: ",animals_list)
print("Id of animals list after adding zebra: ",id(animals_list))
```

Output:

```text
Id of animals list:  140090834089280
Id of another list:  140090834089280
animals list:  ['cat', 'dog', 'cow', 'monkey', 'lion', 'tiger', 'zebra']
Id of animals list after adding zebra:  140090834089280
```

We get the same id for `animal_list` and `another_list`. When we attempt to mutate our animals list by adding `zebra` to it, we see that the ID remains unchanged, and that's because lists are mutable and Python was able to add a new item to the end of the list, without creating a new list.

---

## Immutable objects

When an object is described as immutable, that means it can't be changed. The following immutable types are built into Python: `int`, `float`, `bool` - which is `True` or `False`, a subclass of int, `string` or `str`, which is a string, `tuple`, `frozenset` and `bytes`.
So it should be obvious that an int like 5 can't be changed. 5 is always 5. You can add another value to it - for example, we can add 1 to 5 and we get a new number 6.However, we can't change 5.

Let's see one code to under stand this.

```py
result = True
another_result = result
print("Id of result: ",id(result))
print("Id of another result: ",id(another_result))
result = False
print("Id of result: ",id(result))
```

Output:

```text
Id of result:  9476448
Id of another result:  9476448
Id of result:  9474016
```

We can see here that both variables, `result` and `another_result` have the same ID. They're both bound to the same value `True` so that makes sense that it should have the same ID. Remember that we're printing the ID of `True` here.

The variables - `result` and `another_result` - are just names that we've bound to that value. Alright, so if bool values could be changed, then changing the values should mean that the ID doesn't change. But we've got a different ID for a result when we assign `False` to it.  Because bools are immutable, we weren't able to change the value of `True`. What Python's done instead, is rebound result to a new value `False`.

When we say that `bools` were immutable, we may think that we can assign a new value to a boolean variable. Now that would be true in other languages. In C or Java, where you can assign new values to boolean variables.

In Python, though, that's not the case. Instead, we've attached the name result, to a new value.

Here's another example.

```py
result = "Hello"
another_result = result
print("Id of result: ",id(result))
print("Id of another result: ",id(another_result))

result += "World"
print("Id of result: ",id(result))
print("Id of another result: ",id(another_result))
```

Output:

```text
Id of result:  139787344838768
Id of another result:  139787344838768
Id of result:  139787344839344
Id of another result:  139787344838768
```

Here the variables `result` and `another_result`, again, have the same id.When we attempt to mutate result, we see the `result` now has a different id.

Notice that the id of result has changed, but another_result still has the same id that it had to start with. Because strings are immutable, Python couldn't change the string `"Correct"`. What it did instead was create a new string, and bind the name result to this new string.

---

## Conclusion

So now we have seen that the same thing done with a mutable object and a immutable object show different behaviors.

Strings are immutable. When we tried to change a string, Python created a new object (a new string) and re-attached the name to it.

Lists are mutable, they can be changed. When we appended a new item in this code, Python was able to change the contents of the list, without creating a new one.

So that's the difference between mutable and immutable objects. An immutable object can't be changed. You can create a new object, and use the same variable name for it, but you can't change the value of an immutable object. Mutable objects, such as lists, can be changed.
