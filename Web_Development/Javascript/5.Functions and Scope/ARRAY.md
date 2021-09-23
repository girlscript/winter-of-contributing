#  ARRAYS IN JAVASCRIPT
An array is a special variable, which can hold more than one value at a time. They are used to store multiple values in a single variable of same data type. It is a **non primitive** data-type.
```js 
	//syntax
	const  _array_name_ = [_item1_, _item2_, ...];
	
	//without array
	const GWoC_2021="2021";
	const GWoC_2020="2020";
	
	//with array
	const GWoC= [ "2021" ,  "2020" ];
	
	//Spaces and line breaks are not important
	const GWoC= [ 
	  "2021" ,
	  "2020" 
	  ];
   ```
   Genarally developers declare arrays as const.
   
   You can also create an array, and then provide the elements:
   ```js
       const GWoC= [];
       GWoC[0]="2021";
       GWoC[1]="2020";
   ```
   
   ##  Using the JavaScript Keyword new
   JavaScript has a built in array constructor `new Array()`. We can create and assign values to an array using new keyword.
   ```js
       const GWoC= new Array("2021", "2020");
   ```
   
   ## Accessing Array Elements
  You access an array element by referring to the  **index number** and the index starts with 0.
  ```js
       const GWoC= new Array("2021", "2020");
       
       //at index 0
       const at_index_0=GWoC[0];
       //at index 1
       const at_index_1=GWoC[1];
   ```
## Changing an Array Element
We can change array values using the index.
 ```js
       const GWoC= new Array("2021", "2020");
       
       //at index 0
       GWoC[0]="new value";
       //at index 1
       GWoC[1]="new value";

      //changed array is { "new value" , "new value" }
   ```
## Access the Full Array
We can access the entire array using array name.
```js
     const GWoC= [ "2021" ,  "2020" ];
     document.getElementById("demo").innerHTML = GWoC;
```
## Arrays are Objects
Arrays are a special type of objects. The `typeof` operator in JavaScript returns "object" for arrays. Array uses **number** to access elements and object use **names**.
```js
	 //array
     const GWoC= [ "2021" ,  "2020" ];
     
     //object
     const GWoC= { firstYear : "2021", lastYear : "2020"};
```
## Array Properties and Methods
1. **length** : returns the length of an array (the number of array elements).
   ```js
     const GWoC= [ "2021" ,  "2020" ];
     GWoC.length; //returns 2
   ```
  
  2. **First** and **Last** element : can be accessed 
	  ```js
	     const GWoC= [ "2021" ,  "2020" ];
	     const first_element = GWoC[0];
	     const last_element = GWoC[1];
	   ```
	
	3. Looping through Array Elements using **for loop** and **Array.forEach()** :
	   ```js
	      const GWoC= [ "2021" ,  "2020" ];
	      
	      //using for loop
		  text = "<ul>";  
          for (let i = 0; i < GWoC.length; i++) {  
		  text += "<li>" + fruits[i] + "</li>";  
		  }  
		  text += "</ul>";
		  
		  //using forEach
		  let text = "<ul>";  
		  fruits.forEach(text += "<li>" + value + "</li>");  
		  text += "</ul>";   
		  }
	   ```
	  4. Adding Array Elements : using push() method.
	     ```js
	     const GWoC= [ "2021" ,  "2020" ];
	     GWoC.push("2022");
         ```

## Associative Arrays
Many programming languages support arrays with named indexes which are called Associative Arrays. JavaScript does  **not**  support arrays with named indexes. In JavaScript,  **arrays**  always use  **numbered indexes**.
