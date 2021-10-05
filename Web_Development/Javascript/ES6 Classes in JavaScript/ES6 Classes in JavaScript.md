console.log("Hello");

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