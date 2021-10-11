import numpy as np

arr = [6, 7, 8, 9]
print(type(arr))
a = np.array(arr)
print(type(a))
print(a.shape)
print(a.dtype)
print(a.ndim)
b = np.array([[1, 2, 3], [4, 5, 6]])
print(b)
print(b.ndim)
print(b.shape)

#a 2x3 array with random values
print(np.random.random((2, 3)))
#a 2x3 array of zeros
print(np.zeros((2, 3)))
##a 2x3 array with ones
print(np.ones((2, 3)))
#a 3x3 identity matrix
print(np.identity(3))

##intra- Operability of array and scalars

c = np.array([[9.0, 8.0, 7.0], [1.0, 2.0, 3.0]])
d = np.array([[4.0, 5.0, 6.0], [9.0, 8.0, 7.0]])

print(c+d)
print(c*d)
print(5/d)
print(c**2)

#Indexing with array &amp; using arrays for data processing

print(a[0])
print(a[3])
print(b[1, 2])
print(b[0, 1])
print(c[1, 1])

print(d[1, 0:2])
e = np.array([[10, 11, 12], [13, 14, 15], [16, 17, 18], [19, 20, 21]])

#subset/slicing
print(e)
print(e[:3, :2])

#interger indexing

print(e[[1, 2, 3, 0], [0, 1, 2, 1]])

#boolean indexing

print(e[e > 15])
