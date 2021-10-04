## Structs
<p align="center">
<img src="https://user-images.githubusercontent.com/85386116/135802507-0baf11a5-c39d-4a54-8d04-f1ee46ce7ec4.png" width="80%" align="center">
</p>

# <img src="https://user-images.githubusercontent.com/85386116/135816998-e7fc3fc0-294f-45e5-b5d6-56c9a72cd810.png" width="65px" align="center">What is a struct? <br>
A struct is a user-defined type that represents a collection of fields. It can be used in places where it makes sense to group the data into a single unit rather than having each of them as separate values.
A struct (short for "structure") is a collection of data fields with declared data types. Golang has the ability to declare and create own data types by combining one or more types, including both built-in and user-defined types. Each data field in a struct is declared with a known type, which could be a built-in type or another user-defined type.

Structs are the only way to create concrete user-defined types in Golang. Struct types are declared by composing a fixed set of unique fields. Structs can improve modularity and allow to create and pass complex data structures around the system. You can also consider Structs as a template for creating a data record, like an employee record or an e-commerce product.

The declaration starts with the keyword type, then a name for the new struct, and finally the keyword struct. Within the curly brackets, a series of data fields are specified with a name and a type.

For instance, an employee has a firstName, lastName and age. It makes sense to group these three properties into a single struct named Employee.

## <img src="https://user-images.githubusercontent.com/85386116/135817297-6c3c9519-91bd-4534-98c9-4f6a677b5c07.png" width="35px"> Install


```bash
go get github.com/fatih/structs
```

## Usage and Examples

Just like the standard lib `strings`, `bytes` and co packages, `structs` has
many global functions to manipulate or organize your struct data. Lets define
and declare a struct:

```go
type Server struct {
	Name        string `json:"name,omitempty"`
	ID          int
	Enabled     bool
	users       []string // not exported
	http.Server          // embedded
}

server := &Server{
	Name:    "gopher",
	ID:      123456,
	Enabled: true,
}
```

```go
// Convert a struct to a map[string]interface{}
// => {"Name":"gopher", "ID":123456, "Enabled":true}
m := structs.Map(server)

// Convert the values of a struct to a []interface{}
// => ["gopher", 123456, true]
v := structs.Values(server)

// Convert the names of a struct to a []string
// (see "Names methods" for more info about fields)
n := structs.Names(server)

// Convert the values of a struct to a []*Field
// (see "Field methods" for more info about fields)
f := structs.Fields(server)

// Return the struct name => "Server"
n := structs.Name(server)

// Check if any field of a struct is initialized or not.
h := structs.HasZero(server)

// Check if all fields of a struct is initialized or not.
z := structs.IsZero(server)

// Check if server is a struct or a pointer to struct
i := structs.IsStruct(server)
```

### Struct methods

The structs functions can be also used as independent methods by creating a new
`*structs.Struct`. This is handy if you want to have more control over the
structs (such as retrieving a single Field).

```go
// Create a new struct type:
s := structs.New(server)

m := s.Map()              // Get a map[string]interface{}
v := s.Values()           // Get a []interface{}
f := s.Fields()           // Get a []*Field
n := s.Names()            // Get a []string
f := s.Field(name)        // Get a *Field based on the given field name
f, ok := s.FieldOk(name)  // Get a *Field based on the given field name
n := s.Name()             // Get the struct name
h := s.HasZero()          // Check if any field is uninitialized
z := s.IsZero()           // Check if all fields are uninitialized
```

### Field methods

We can easily examine a single Field for more detail. Below you can see how we
get and interact with various field methods:


```go
s := structs.New(server)

// Get the Field struct for the "Name" field
name := s.Field("Name")

// Get the underlying value,  value => "gopher"
value := name.Value().(string)

// Set the field's value
name.Set("another gopher")

// Get the field's kind, kind =>  "string"
name.Kind()

// Check if the field is exported or not
if name.IsExported() {
	fmt.Println("Name field is exported")
}

// Check if the value is a zero value, such as "" for string, 0 for int
if !name.IsZero() {
	fmt.Println("Name is initialized")
}

// Check if the field is an anonymous (embedded) field
if !name.IsEmbedded() {
	fmt.Println("Name is not an embedded field")
}

// Get the Field's tag value for tag name "json", tag value => "name,omitempty"
tagValue := name.Tag("json")
```

Nested structs are supported too:

```go
addrField := s.Field("Server").Field("Addr")

// Get the value for addr
a := addrField.Value().(string)

// Or get all fields
httpServer := s.Field("Server").Fields()
```

We can also get a slice of Fields from the Struct type to iterate over all
fields. This is handy if you wish to examine all fields:

```go
s := structs.New(server)

for _, f := range s.Fields() {
	fmt.Printf("field name: %+v\n", f.Name())

	if f.IsExported() {
		fmt.Printf("value   : %+v\n", f.Value())
		fmt.Printf("is zero : %+v\n", f.IsZero())
	}
}
```


## Declaring a struct
```
type Employee struct {  
    firstName string
    lastName  string
    age       int
}
```
The above snippet declares a struct type Employee with fields firstName, lastName and age. The above Employee struct is called a named struct because it creates a new data type named Employee using which Employee structs can be created.

This struct can also be made more compact by declaring fields that belong to the same type in a single line followed by the type name. In the above struct firstName and lastName belong to the same type string and hence the struct can be rewritten as
```
type Employee struct {  
    firstName, lastName string
    age                 int
}
```
Although the above syntax saves a few lines of code, it doesn't make the field declarations explicit. Please refrain from using the above syntax.

## Creating named structs

Let's declare a named struct Employee using the following simple program.

```
package main

import (  
    "fmt"
)

type Employee struct {  
    firstName string
    lastName  string
    age       int
    salary    int
}

func main() {

    //creating struct specifying field names
    emp1 := Employee{
        firstName: "Sam",
        age:       25,
        salary:    500,
        lastName:  "Anderson",
    }

    //creating struct without specifying field names
    emp2 := Employee{"Thomas", "Paul", 29, 800}

    fmt.Println("Employee 1", emp1)
    fmt.Println("Employee 2", emp2)
}
```
In line no.7 of the above program, we create a named struct type Employee. In line no.17 of the above program, the emp1 struct is defined by specifying the value for each field name. The order of the fields need not necessarily be the same as that of the order of the field names while declaring the struct type. In this case. we have changed the position of lastName and moved it to the end. This will work without any problems.

In line 25. of the above program, emp2 is defined by omitting the field names. In this case, it is necessary to maintain the order of fields to be the same as specified in the struct declaration. Please refrain from using this syntax since it makes it difficult to figure out which value is for which field. We specified this format here just to understand that this is also a valid syntax :)

The above program prints
```
Employee 1 {Sam Anderson 25 500}  
Employee 2 {Thomas Paul 29 800}  
```
# Conclusion
In this you learned the basics of structs. But there is a lot more to explore about structs like methods on a struct, struct composition, embedded fields, promoted fields etc.

Thanks for Reading ✨
