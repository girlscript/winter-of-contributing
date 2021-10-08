## JAVASCRIPT STATIC METHODS 

Javascript static methods is defined using **static** keyword. 
The static method is defined on a class, but it's not actually the part of the instantiated objects rather static methods and variables does not require any instance to accessed.
Static methods are called **Helper** method, because they don't really need any object to be bound to them.

Example-

````js

class Rectangle{
            constructor(width,height){
                this.width = width;
                this.height = height;
            }

            static isEquals(a,b){
                return a.width * a.height === b.width * b.width;
            }
        }

        let obj = new Rectangle(10,20);
        let obj2 = new Rectangle(20,30);
        let obj3 = new Rectangle(10,20);

        console.log(Rectangle.isEquals(obj,obj2));
        console.log(Rectangle.isEquals(obj,obj3));

````

Output-

false

true

**CALLING STATIC METHODS FROM ANOTHER STATIC METHODS** 

Only static methods and static variables can be called inside static method. **This** keyword can be used for this.

````js

class Rectangle {
            constructor(width, height) {
                this.width = width;
                this.height = height;
            }

            static staticwidth = 10;
            static staticheight = 20;

            static squareFromWidth() {
                console.log(`Square from Width ${this.staticwidth * this.staticwidth}`);
            }

            static squareFromHeight() {
                console.log(`Square from Height ${this.staticheight * this.staticheight}`);
                this.squareFromWidth();
            }
        }

        console.log(Rectangle.squareFromHeight());

````

Output-

Square from Height 400

Square from Width 100

**Note-**
Here **this** keyword is pointing to class not the object.



**CALLING STATIC METHODS FROM CONSTRUCTOR**

Static members are not directly accessible using the **this** keyword from non-static methods, because this keyword refers to te object of the class and static methods and variable are bound to class. We need to call them using the class name: 

Syntax-
CLASSNAME.STATIC_METHOD_NAME().

Example-

````js

class Rectangle {
            constructor(width, height) {
                this.width = width;
                this.height = height;

                console.log(`Calling from constructor static width = ${Rectangle.staticwidth} and static height = ${Rectangle.staticHeight}`);

                // now we will call static method.
                Rectangle.squareFromWidth();
            }

            static staticwidth = 10;
            static staticheight = 20;

            static squareFromWidth() {
                console.log(`Square from Width ${this.staticwidth * this.staticwidth}`);
            }

            static squareFromHeight() {
                console.log(`Square from Height ${this.staticheight * this.staticheight}`);
                this.squareFromWidth();
            }
        }

        let obj = new Rectangle();

````
Output-

Calling from constructor static width = 10 and static height = 20

Square from Width 100


**CALLING STATIC METHODS FROM NON STATIC METHODS** 

We can also call static a method from non static methods. But again not with the **this** keyword as that would point to object.

````js

class Rectangle {
            constructor(width, height) {
                this.width = width;
                this.height = height;
            }

            static staticwidth = 10;
            static staticheight = 20;

            static squareFromWidth() {
                console.log(`Square from Width ${this.staticwidth * this.staticwidth}`);
            }

            void calculateArea(){
                console.log('Calling static methos from non static method.');
                Rectangle.squareFromWidth();
                console.log(`Area of Rectangle is ${width*height}`);
            }
        }

        let obj = new Rectangle(30,40);
        obj.calculateArea();

````

Output-

Calling static methos from non static method.

Square from Width 100

Area of Rectangle is 1200


Contributor: [Sakshi Agarwal](https://github.com/7sakshi7)

