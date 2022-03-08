
# Type Conversions in C++

As we know most of the primitive data type can convert it into each other.

```cpp
float x=10.5;
int y=x;             //y=10
bool z=y;            //z=true
cout >> x >>endl>> y >>endl>> z;
```

### Output

```output
    10.5 
    10 
    1
```

Remember: In boolean except 0(zero) everything is true.

#### 
## Order of Widening Implicit Conversions
bool -> char -> short int -> int -> unsignrd int -> long -> long long -> float -> double -> long double 

```cpp
    int x = 10;
    char y = 'A';
    cout << (x+y) << endl;
    float z = 5.5;
    cout << (x+z) << endl;
```

ASCII value of 'A' is 65. 
### Output

```output
    75
    15.5
```
#### 
## Explicit Conversions

```cpp
    int x=15, y=2;
    double z=x/y;
    cout<<z;
```
As x and y are integers, z did not turn out to be a double value.
### Output

```output
    7
```
#### 
## C Style Explicit Conversion
```cpp
    int x=15, y=2;
    double z=double(x)/y;   //explicit conversuion
    cout<<z;
```

### Output

```output
    7.5
```

## C++ Style Explicit Conversion
```cpp
    int x=15, y=2;
    double z=static_cast<double>(x)/y;   //explicit conversuion
    cout<<z;
```

### Output

```output
    7.5
```

  