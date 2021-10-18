
# C++ 17 basics

This documentation covers following topics:
- New features in C++17
- Obsolete syntax in C++17
- New headers with their usage
- References

## New features in C++17:
C++17 introduced many new features which made it different and better than the already existing versions of C++.
These features are:
- The `filesystem library`
- `Mathematical Special Functions`
- Library fundamentals v1 TS: `std::any`, `std::optional`, `std::string_view`, `polymorphic allocators`, `searchers`
- C11 introduced: `std::aligned_alloc`, `std::timespec_get`
- Parallelism v1 TS: `execution policies`, `std::reduce`,  `std::inclusive_scan`, `std::exclusive_scan`, but removing exception_list.
- Library fundamentals v2 TS introduced: `std::void_t`, `std::conjunction`, `std::disjunction`, `std::negation`, `std::not_fn`, `std::gcd`, `std::lcm`.

## Obsolete syntax in C++17:
C++17 made some syntax as obsolete which are still usable in older versions of C++ like C++14 or other older versions. These obsolete syntaxes can be classified into two types:
- Removed
- Deprecated

Removed syntax are not at all supported by C++17 whereas deprecated syntax are supported with a warning.
Some of the `removed` syntax include:
`std::auto_ptr`, `deprecated function objects`, `std::random_shuffle`, `std::unexpected`, the obsolete iostreams aliases, trigraphs, the `register` keyword, bool increment, dynamic exception specification

Deprecated syntax in C++17 include: `std::iterator`, `std::raw_storage_iterator`, `std::get_temporary_buffer`, `std::is_literal_type`, `std::result_of`, all of \<codecvt\>

## New Headers in C++17:
C++17 introduced following new header files in its version:
- `<any>`: Provides a class which creates and holds instances of a CopyConstructible type.
- `<charconv>`: A part of strings library, provides two functions namely from_chars and to_chars to convert a character sequence to an integer or floating-point value and vice-versa
- `<execution>`: A part of algorithms library, used to test whether classes represent an execution policy based on four types of execution policies
- `<filesystem>`: A part of filesystem support library, provides various classes and functions to perform file handling in C++
- `<memory_resource>`: Helps in dynamic memory management
- `<optional>`: A utilities library, provides classes and functions for comparison, swapping, etc.
- `<string_view>`: A part of strings library, providing various classes and functions for modifying string to a desired format.
- `<variant>`: A utilities library, helps in creating variant helper classes and performing operations on them.

## References:
- https://en.cppreference.com/w/cpp/17
- https://en.cppreference.com/w/cpp/header
