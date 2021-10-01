An array is a data structures in which similar type of elements are stored in continuous memory location. 
In java an array is an object which holds fixed number of values of same data type. Arrays in java are indexed based and the index number begins with zero till (n-1) where n is the size of the array declared.
 
 Diagrammatic representation of Single Dimensional Array having 7 elements
  						
![SDarray](https://user-images.githubusercontent.com/87275111/134942367-c3987a3a-8ed8-438e-9356-16b4cbc4e666.PNG)

## Single Dimensional Array
Single Dimensional Array is used with one subscript ([]). The variables of the single dimensional array can be accessed by its index within the square bracket.
### Declaration of One D Array:
The declaration consists of data_type, variable name and a square bracket called subscript.
The data type can be a primitive type (like int,char,float, etc.) or non-primitive data (objects).

Various ways of declaration are:
-	data_type[] array_name;
-	data_type array_name[];
-	data_type []array_name;
### Creation of One D Array:
For the creation of an array the **new** keyword is used. The new creates an array in heap memory.
While construction of an array we must also specify the size of the array.

The syntax looks something like:

array_name = new data_type[size];

### Initialization of Array:
The array can be initialized by referring its position, starting from the 0th index.

array_name[index]=value;

Example demonstrating declaration and creation of One D array:

```
class OneD
{
  public static void main(String args[])
   {
    int marks[];
		//creating array to store marks of 5 subjects
		marks=new int[5];
		//initializing marks of 5 subjects
		marks[0]=85;
		marks[1]=95;
		marks[2]=72;
		marks[3]=63;
		marks[4]=90;
       //Displaying the Content of the array
		for(int i=0;i<=4;i++)
		{
			System.out.println("Marks in subject "+(i+1)+"="+marks[i]);
		}
	}
}
```
#### OUTPUT
![output1](https://user-images.githubusercontent.com/87275111/134934829-426e59f5-e039-402c-a784-82cd17935264.PNG)

#### Alternately we can also declare and initialize the array in same line by:

data_type array_name[]={value1,value2,…….value n};

#### Example program 
```
class One_D
{
	public static void main(String args[])
	{
		//creating array to store marks of 5 subjects
		int marks[]={85,55,72,63,90};
		
		//Displaying the Content of the array
		for(int i=0;i<=4;i++)
		{
		System.out.println("Marks in subject "+(i+1)+"="+marks[i]);
		}
	}
}
```
#### OUTPUT
![output2](https://user-images.githubusercontent.com/87275111/134941984-56f12da9-083a-41f2-a1d3-60ab2dbfc88b.PNG)


