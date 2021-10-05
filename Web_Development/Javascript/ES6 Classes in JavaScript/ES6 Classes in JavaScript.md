// ES6 Classes in JavaScript

The ES6 JavaScript supports the Object-Oriented programming components i.e Object, class and methods

* Object: A real-time object entity means the presentation of any entity in real-time.

* Class: It contains the Constructors and Functions. The Constructors take responsibility for allocating memory for the objects of the class. 
         The function takes the responsibility of the action of the objects.

* Methods: It communicates between the objects.

The ES6 Class supports the inheritance. Inheritance has the courage to create entities from existing entities. There are two types of Class in ES6: 
* parent class/super class: The class extended to create new class are know as a parent class or supper class.

* child/sub classes: The class are newly created are known as child or sub class. Sub class inherit all the properties from parent class except constructor

For Example:

class Employee{
    constructor(givenName, givenExperience, givenDivision){
        this.name = givenName; 
        this.experience = givenExperience; 
        this.division = givenDivision;
    }

    slogan(){
        return `I am ${this.name} and this company is the best`;
    }

    joiningYear(){
        return 2021 - this.experience;
    }

    static add(a,b){
        return a + b;
    }
};

// class child_name extends parent_name

class Programmer extends Employee{
    constructor(givenName, givenExperience, givenDivision, language, github){
       super(givenName, givenExperience, givenDivision);
       this.language = language;
       this.github = github;
    }

    favouritelanguage(){
        if(this.language == 'python'){
            return 'Python';
        }
        else{
            return 'JavaScript';
        }
    }

    static multiply(a, b){
        return a * b;
    }
};

rohan = new Programmer("Rohan", 3, "Lays", "Go", "Rohan420");
console.log(rohan);
console.log(rohan.favouritelanguage());
console.log(Programmer.multiply(5, 7));

Output:

Programmer {        
  name: 'Rohan',    
  experience: 3,    
  division: 'Lays', 
  language: 'Go',   
  github: 'Rohan420'
}
JavaScript
35