# Advanced Function - Zip

Zip is an advanced python function which is used to map two or more iterables into a mapped class

The zip() function returns a zip object, which is an iterator of tuples where the first item in each passed iterator is paired together, and then the second item in each passed iterator are paired together etc.

## Topics Covered

1. Basic Idea
2. Syntax, Input, Output Format

```python
    zipping = zip(iterator1, iterator2, iterator3 ...)
```

3. A Basic Example

```python
    zipped = zip(["A", "B", "C"], [1, 2, 3])
```

4. Converting it to a desired Output

```python
    print(tuple(zipped))
    print(list(zipped))
    print(dict(zipped))
```

5. Iterate over a Loop

```python
    for value in zipped:
        print(value)
```

6. Unequal element length Case

7. Unzipping into a zipped iterables

```python
    Alpha, Number = zip(*zipped)
    print(Alpha, Number)
```

## Summary

Zip makes it easy to map two or more iterables and also they can be unmapped easily



## Conclusion

Issue Number #570 Advanced Python Function (Zip) has been solved as a source of Documentation in Google Colab file (python_zipfunctions.ipynb)

## Resources

[Python Documentation](https://docs.python.org/3/library/functions.html#zip)<br>

[W3 Schools](https://www.w3schools.com/python/ref_func_zip.asp)
