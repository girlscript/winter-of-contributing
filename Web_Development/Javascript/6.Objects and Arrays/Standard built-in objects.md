# Standard built-in objects
This chapter documents all of JavaScript's standard, built-in objects, including their methods and properties.

The term "global objects" (or standard built-in objects) here is not to be confused with the global object. Here, "global objects" refer to objects in the global scope.

The global object itself can be accessed using the this operator in the global scope. In fact, the global scope consists of the properties of the global object, including inherited properties, if any.

Other objects in the global scope are either created by the user script or provided by the host application. The host objects available in browser contexts are documented in the API reference.

For more information about the distinction between the DOM and core JavaScript, see JavaScript technologies overview.

# Standard objects by category
## Value properties
These global properties return a simple value. They have no properties or methods.

- Infinity
- NaN
- undefined
- globalThis

## Function properties
These global functions—functions which are called globally, rather than on an object—directly return their results to the caller.

- eval()
- uneval()
- isFinite()
- isNaN()
- parseFloat()
- parseInt()
- encodeURI()
- encodeURIComponent()
- decodeURI()
- decodeURIComponent()
- Deprecated
     - escape()
     -  unescape()

## Fundamental objects
These are the fundamental, basic objects upon which all other objects are based. This includes general objects, booleans, functions, and symbols.

- Object
- Function
- Boolean
- Symbol

## Error objects
Error objects are a special type of fundamental object. They include the basic Error type, as well as several specialized error types.

- Error
- AggregateError
- EvalError
- InternalError
- RangeError
- ReferenceError
- SyntaxError
- TypeError
- URIError

## Numbers and dates
These are the base objects representing numbers, dates, and mathematical calculations.

- Number
- BigInt
- Math
- Date

## Text processing
These objects represent strings and support manipulating them.

- String
- RegExp

## Indexed collections
These objects represent collections of data which are ordered by an index value. This includes (typed) arrays and array-like constructs.

- Array
- Int8Array
- Uint8Array
- Uint8ClampedArray
- Int16Array
- Uint16Array
- Int32Array
- Uint32Array
- Float32Array
- Float64Array
- BigInt64Array
- BigUint64Array

## Keyed collections
These objects represent collections which use keys. The iterable collections (Map and Set) contain elements which are easily iterated in the order of insertion.

- Map
- Set
- WeakMap
- WeakSet

## Structured data
These objects represent and interact with structured data buffers and data coded using JavaScript Object Notation (JSON).

- ArrayBuffer
- SharedArrayBuffer
- Atomics
- DataView
- JSON

## Control abstraction objects
Control abstractions can help to structure code, especially async code (without using deeply nested callbacks, for example).

- Promise
- Generator
- GeneratorFunction
- AsyncFunction
- AsyncGenerator
- AsyncGeneratorFunction
- Reflection
- Reflect
- Proxy

## Internationalization
Additions to the ECMAScript core for language-sensitive functionalities.

- Intl
- Intl.Collator
- Intl.ListFormat
- Intl.NumberFormat
- Intl.PluralRules
- Intl.RelativeTimeFormat
- Intl.Locale

## WebAssembly
- WebAssembly

- WebAssembly.Module

- WebAssembly.Instance

- WebAssembly.Memory

- WebAssembly.Table

- WebAssembly.CompileError

- WebAssembly.LinkError

- WebAssembly.RuntimeError

## Other
- arguments