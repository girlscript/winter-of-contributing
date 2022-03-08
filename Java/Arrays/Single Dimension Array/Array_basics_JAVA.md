

**ARRAYS**

Arrays are collections of same kind of data values, stored in a contiguous blocks of memory location, represented by a single variable. Arrays are  similar concept to strings, these are the kind of non-primitive data types which are not predefined in Java. So to understand it conceptually let’s jump right into the example.

**Creating an Array**

In JAVA, array can be declared into two ways:

i) int marks[]=new int[5];
ii) int[] marks = new int[5];

note: here 5  tells us the length of an array & marks is the variable representing the array of length 5.
Likewise Strings , Arrays follow the same rule for indexing in java.

**Initialising an Array**

Arrays can be intialised in two ways:
i) 
int marks[]={76,48,81,56,91};

ii)
int marks[]=new int[5];
marks[0]=76;
marks[1]=48;
marks[2]=81;
marks[3]=56;
marks[4]=91;

The above two arrays named ‘marks’ stores the collection of marks of 5 students. Both the initialisations are same, the only difference is that in first one we are initialising the whole array at once, and in the second one we are initialising each and every index of the array one by one.
Also, like any other variable we can play with any of the elements of the array or modify its value.

Ex:                                                                 
 
int a=marks[2]+9;
	      
System.out.print(a);

**Taking user input in array**

i)Taking the input for each index:
Taking the input of an array for each index can result in a lengthy code, though the user can use this way for any array of small length (such as 3).

Ex:
String cars[] = new String[3];
cars[1]=sc.nextInt();
cars[2]=sc.nextInt();
cars[3]=sc.nextInt();

Note: ‘sc.nextInt()’ is use to fetch integer-inputs from the user during an output. We will talk about user inputs in details in the upcoming blogs.

ii)Taking the input by using for loops:
Loops are used to do a certain task for a specified number of times in a code, until a certain condition becomes false. We will talk about loops in details in the next article. First of all let us understand how a ‘for loop’ works in a program.
Syntax:

for(initialisation; condition; increment/decrement){
//CODE
}

So basically in a ‘for loop’ the set of statements or code (within the brackets) is iterated specified number of times until the given condition becomes false. Similarly for taking input in an array using a for loop we will run the loop until the every index of the array gets a certain value by the user. Let us have a look at a example.
String cars[] = new String[3];
for(int i=0; i<3; i++){
cars[i]=sc.nextInt();
}

In the above example, inside the for loop round brackets we have an int variable assigned to zero, the second statement checks the condition whether the value of the integer has reached the value of the length of the array or not and the third statement increments the value of the integer ‘i’ , every time the loop starts. Note that the loop will always run up to n-1 times where n is the length of that array, since the indexes of arrays start from 0. Below is the elaborated explanation of how the loop will work and the user will be allowed for the input until the last index place of the array .

for(int i=0; i<3; i++){                  // cars[0] = sc.nextInt();
                                         // cars[1]=  sc.nextInt();
System.out.println(cars[i]);             // cars[2]=  sc.nextInt();
                                         // At i=3, loop will break
}                             

(since the loop is set to work until i<3, this time the iteration will not work)

For displaying the loops to the output screen after the array has collected the data by the user as inputs, one can use the ‘for loops’ once again.

Ex:

for(int i=0; i<3; i++){

System.out.println(cars[i]);

}

Note: Instead of using ‘i<3’ the user can also use ‘i<cars.length’. ‘_arrayName_.length’ function allows the user to take or store the length of any given array inside a variable. 

Ex:   
int n=cars.length;


THANKYOU!


