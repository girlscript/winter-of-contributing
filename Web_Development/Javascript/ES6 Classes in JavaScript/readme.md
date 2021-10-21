// ES6 classes i JavaScript

The ES6 JavaScript supports the Object-Oriented programming (OOPs) components:
* Object 
* Class
* Methods
* Object: It means the presentation of any entity in real-time.
* Class: Classes are used to make the new object. It contains the Constructors and Functions. The Constructors is used for allocating memory for the objects.
The function is used for taking the actions of objects.
* Methods: It communicates between the objects.

The ES6 Class supports the inheritance. 

There are two sorts of Class in ES6:

* parent class/super class: The category extended to make new class are known as a parent class or supper class.

* child/sub classes: the category are newly created are referred to as child or sub class. Sub classes are used to inherit all the properties from parent class except constructor

For Example:

class Student{
constructor(givenName, givenExperience, givenDivision){
this.name = givenName;
this.experience = givenExperience;
this.division = givenDivision;
}
joiningYear(){
return 2021 - this.experience;
}
};

// class child_name extends parent_name

class Programmer extends student{
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
};

Ayush = new Programmer("Ayush", 1, "Lays", "javaScript", "ayushjain27");
console.log(rohan);
console.log(rohan.favouritelanguage());

Output:

Programmer {
name: 'Ayush',
experience: 1,
division: 'Lays',
language: 'JavaScript',
github: 'ayushjain27'
}

JavaScript

