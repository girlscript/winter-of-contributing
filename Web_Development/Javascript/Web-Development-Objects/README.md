# Contents to be covered in this particular notebook -
* What are JavaScript Objects? ✔
* How to define them? ✔
* What are Getters and Setters? ✔
* What are keys and values in Javascript Objects? ✔


## What are JavaScript Objects?

To understand this clearly let's think of some real world examples such as motorbike. We can consider motorbike as an object in real world and we often use the term "property" and "functioning" to differentiate one motorbike from others. Properties such as brand, color, body design, posture of motorbike, etc. And motorbike also performs some functioning like applingBrake(), accelerate() which defines the working of the objects.

Now taking the above example of motorbike as consideration, We can easily understand objects in Javascript, they are more or less as same as that motorbike having different values and properties. In javascript objects consist of **values** instead of properties and **methods** in place of functioning. 
> Example- Object named person will be consisting of some values like name, age and methods like setSchoolName(), setNickName().

So we can conclude that in javascript, Object consist of pair of values and may contain some methods as well. 

## How to define Javascript Objects?
There is a pre-defined syntax in javascript to define objects, which is known as **key:value pair**, where `key` is a unique identifier for a particular `value` seperated by a colon. 

Let's dive deep into the `key:value pair` -

The first term `key` represents the name of property of the object which should be declared in left side and the second term `value` contains the data related with its adjacent key which must be assigned at right side of corresponding keys.
>Example- Let's create an object of person consisting of _first name, last name and age_. 
```
const person = {
    first_name: "Uttam", 
    last_name: "kumar",
    age: 20
};
```

###Extra tips for good practise-
In the above example 
* **Keys** are `first_name`, `last_name` and `age` and their correspondng entries like "Uttam","Kumar" and 20 are **values** ;
* We had used `first_name` instead of `first name` because in every programing language space is counted as delimiter. So you have to be very careful from doing this mistake;
* Strings should be wrapped either in ' '(single quotes) or in " "(double quotes);
>It's good practise to use single quotes with characters and double quotes with Strings.


## What are Getters and Setters?
Getters and Setters are the methods used to define Object Accessors (Computed Properties).

### Getters
* Getters are used to get or fetch the values from the created objects.
* Getters can be declared using `get` keyword.
>Example-
Let's create an object named _car_ consisting of properties like _color_, _brand_ and _noOfWheels_ and in this example we are also going to create one **getter** which will help us to get the value of _noOfWheels_(key).
```
const car = {
  brand: "honda",
  color: "black",
  noOfWheels: 4,
  get wheels(){return this.brand;}
};
console.log(car.wheels);
```
  **Output** => `4`

####Explanation-
* We are fetching the value of the key named `noOfWheels` using **getters** and dot operator(.);


### Setters
* Setters are used to set or assign the values in the created objects.
* Setters can be declared using `set` keyword.
* Setters requires value that has to be assigned as its parameter.
>Example-
Let's create similar object as above named _car_ consisting of properties like _color_, _brand_ and _noOfWheels_ and in this example we are also going to create one **setter** which will help us to set the value of _noOfWheels_(key).
```
const car = {
  brand: "honda",
  color: "black",
  noOfWheels: 4,
  set wheels(newValue){this.noOfWheels = newValue;}
};
car.wheels = 1;
console.log(car.noOfWheels);
```
  **Output** => 1

####Explanation-
* We are assigning a new value to the key named `noOfWheels` using **setters** and dot operator(.);

#### If you don't know about dot operator
> Dot operator is denoted by fullstop `(.)` and it is used to access the values or properties inside any object. 

  **Syntax**

  `nameOfObject.nameOfKey` will return the value corresponding to the mentioned key.
  
  ## What are keys and values in Javascript Objects?

---


As we had discussed earlier about **key:value pair**, let's discuss it again but in detail.
### What are keys?
* Key are the unique identifier of all the values inside the object. 
* Keys helps us to visualise an object in more easier way because it states about the value in a single word.
* Key is often written in form a single word, but we can make use of _(underscores) to show multiple words.
> Example- `nameOfCar` can be written as `name_of_car`.
* Javascript provides a method called `Object.keys()` which will allow us to fetch all the keys of an object in one go.
> Example-

  ```
  const object1 = {
    a: 'somestring',
    b: 42,
    c: false
  };
  console.log(Object.values(object1));
  Output : ['a', 'b', 'c'] 
  ```
### What are values?
* Values corresponding to its unique identifier called keys inside the object, is known as values. 
* Values can be written either in form of string, number, floating numbers,or booleans.
* Javascript provides a method called `Object.values()` which will allow us to fetch all the values of an object in one go.
> Example- 

  ```
  const object1 = {
    a: 'somestring',
    b: 42,
    c: false
  };

  console.log(Object.values(object1));
  Output : ['something', '42', 'false'] 
  ```
  contributed by [Uttam_kumar](https://github.com/helper-uttam)
