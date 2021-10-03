# History of C++ versions

<br>

### Introduction

C++ is a cross-platform language used to create high-performance applications. It has user-friendly syntax, rich libraries, and fast speed.
The language was updated to 3 versions namely C++11, C++14, and C++17 respectively

<br>

### Version release and features:

The first version of C++ was **C++98 (ISO/IEC 14882:1998)** released in October 1998.
**C++ 03** in 2003 introduced variable value initialisation.

**C++ 11** had smart pointers, multithreading, auto and decltype and std::array container.

<br>

**C++ 14** was released in August 2014. The features included:

1. Introduction of polymorphic lambdas
2. Digit separators
3. Generalized lambda capture using 'this'

    ```C++
    [*this]{ std::cout << could << " be " << useful << '\n'; }
    ```

4. Variable templates
5. Binary integer literals, and
6. Quoted strings etc.

<br>

Hundreds of proposals were put forward for **C++ 17**. It was released in December, 2017. The features included:
1. Nested namespaces

    ```C++
    namespace Game::Graphics::Physics {
      class 2D {
         ...
      };
    }
    ```
    
2. Fold expressions

    ```C++
    auto C11_sum(){
       return 0;
    }
    template<typename T1, typename... T>
    auto C11_sum(T1 s, T... ts){
       return s + C11_sum(ts...);
    }
    ```

3. Structured bindings

    ```C++
    const auto [it, inserted] = map.insert( {"hello", world} );
    ```

4. Initializers in if and switch statements

    ```C++
    if (const auto it = find(begin(str),
                     end(str),
                     "abc");
       it != end(str)) {
      *it = "$$$";
    }
    ```

5. Transactional memory
6. Inline Variables, and
7. Class Template argument deduction(CTAD), etc.

<br>

The complete list of all the changes can be found at https://isocpp.org/files/papers/p0636r0.html

<br>

The next version, C++20 is yet to be released in 2021-22. The features have been anticiapted but not confirmed officially.


C++ is still remains the third most popular programming language according to the TIOBE Index’s latest study of 2019.

<br>

### Sources:

* https://www.geeksforgeeks.org/history-of-c/
* https://stackoverflow.com/questions/38060436/what-are-the-new-features-in-c17

