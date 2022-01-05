# **JavaScript Static Methods**

**Static class** methods are defined on the class itself.

You cannot call a ``static`` method on an object, only on an object class.

For Example
```js
class Car {
  constructor(name) {
    this.name = name;
  }
  static hello() {
    return "Hello!!";
  }
}

let myCar = new Car("Ford");

// You can calll 'hello()' on the Car Class:
document.getElementById("demo").innerHTML = Car.hello();

// But NOT on a Car Object:
// document.getElementById("demo").innerHTML = myCar.hello();
// this will raise an error.
```

If you want to use the myCar object inside the ``static`` method, you can send it as a parameter:

**For Example**
```js
class Car {
  constructor(name) {
    this.name = name;
  }
  static hello(x) {
    return "Hello " + x.name;
  }
}
let myCar = new Car("Ford");
document.getElementById("demo").innerHTML = Car.hello(myCar);
```

## **Calling a static method from the class constructor or an instance method**
To call a static method from a class constructor or an instance method, you use the class name, followed by the ``.`` and the static method:

```js
className.staticMethodName();
```

Alternatively, you can use the following syntax:
```js
this.constructor.staticMethodName();
```

## **Summary**
* **JavaScript static methods** are shared among instances of a class. Thus, they are associated with the class, not any particular instance of that class.
* The static methods are called via the ``class name``, not the instances of the class.
* Use the ``className.staticMethodName()`` or ``this.constructor.staticMethodName()`` to call a static method in a class constructor or an instance method.

__Contributor :__ [Damini Mehra](https://github.com/daminimehra) :heart: