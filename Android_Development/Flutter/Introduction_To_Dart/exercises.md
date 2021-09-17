## 💻 Exercises

1. Explain briefly about the working of the Array Utility Methods forEach(), map() and reduce(). Use these methods to solve the following questions.\
   a) Given an array **numbers** = [2,3,5,6,8,9], print the square of these numbers.\
   b) Given an array **principal_amount** = [100,500,2000,700,950], return a new array, filled with the simple interest of each of the element in principal_amount array for a **time period** of **2 years** and a **rate of interest** of **15%**.\
   c) Given an array **studentHeigths** = [171,185,163,154,173], find the average height of the students.\
   \
**Answer:**\
The forEach() method, traverses over every element of the given iterable and performs a function over that element.\
The map() method is similar to forEach(), but it actually returns an iterable, whereas forEach() returns a void type.\
The reduce() method is used to obtain a cumulative single value from a given collection.
\
a)
```
  void main(){
      var numbers = [2,3,5,6,8,9];
      var op = numbers.forEach((number)=>print(number*number));
  }

  Output:
      4
      9
      25
      36
      64
      81
```  
      b)
```
   void main(){
      var principal_amount = [100,500,2000,700,950];
      var op = principal_amount.map((p)=>p*2*15/100);
      print(op);
   }

   Output:
   (30, 150, 600, 210, 285)
```
      c)
```
   void main(){
      var studentHeigths = [171,185,163,154,173];
      var op = studentHeigths.reduce((current,next)=>current+next);
      print(op/studentHeigths.length);
   }

   Output:
   169.2
```
2. Given an array of building heights **bHeights** = [828,501,1002,321,978,200], sort the array and print the building heights in descending order.\
\
**Answer:**
```
   void main(){
      var bHeights = [828,501,1002,321,978,200];
      bHeights.sort((h1,h2)=>h2-h1);
      bHeights.forEach((height)=>print(height));
   }

   Output:
   1002
   978
   828
   501
   321
   200
```
3. Given an array of shortlisted candidates for a program **candidates** = ["James","Joseph","Jessica","John","Jonas"], check if a student called John is present in it.\
\
**Answer:**
```
   void main(){
      var candidates = ["James","Joseph","Jessica","John","Jonas"];
      print(candidates.contains("John"));
   }

   Output:
   true
```