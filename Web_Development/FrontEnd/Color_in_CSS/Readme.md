# Colors in CSS

CSS Color property is used to set the color of HTML elements. This property is used to set font color, background color etc.

Color of an element can be defined in the following ways:

- Built-In Color
- RGB Format
- RGBA Format
- Hexadecimal Notation
- HSL
- HSLA

<br>

##### Built-In Color: 

These are a set of predefined colors which are used by its name.
For example: red, blue, green etc.

> Syntax : 

          h1 {
              color: color-name;
             }

<br>

##### RGB Format:

The RGB(Red, Green, Blue) format is used to define the color of an HTML element by specifying the R, G, B values range between 0 to 255. For example: RGB value of Red color is (255, 0, 0), Green color is (0, 255, 0), Blue color is (0, 0, 255) etc.

> Syntax : 

          h1 {
              color: rgb(R, G, B);
             }

<br>

##### RGBA Format:

The RGBA format is similar to the RGB, but the difference is RGBA contains A (Alpha) which specify the transparency of elements. The value of alpha lies between 0.0 to 1.0 where 0.0. represents fully transparent and 1.0 represents not transparent

> Syntax : 

          h1 {
              color:rgba(R, G, B, A);
             }

<br>

##### Hexadecimal Notation:

The hexadecimal notation begins with # symbol followed by 6 characters each range from 0 to F.
For example: Red #FF0000, Green #00FF00, Blue #0000FF etc.

> Syntax : 

          h1 {
              color:#(0-F)(0-F)(0-F)(0-F)(0-F)(0-F);
             }

<br>

##### HSL: 

HSL stands for Hue, Saturation, and Lightness respectively. This format uses the cylindrical coordinate system.
- **Hue:** Hue is the degree of the color wheel. Its value lies between 0 to 360 where 0 represents red, 120 represents green and 240 represents blue color.
- **Saturation:** It takes percentage value, where 100% represents completely saturated, while 0% represents completely unsaturated (gray).
- **Lightness:** It takes percentage value, where 100% represents white, while 0% represents black.

> Syntax : 

          h1 {
              color:hsl(H, S, L);
             }

<br>

##### HSLA: 

The HSLA color property is similar to HSL property, but the difference is HSLA contains A (Alpha) which specify the transparency of elements. The value of alpha lies between 0.0 to 1.0 where 0.0. represents fully transparent and 1.0 represents not transparent.

> Syntax : 

          h1 {
              color:hsla(H, S, L, A);
             }

<br>



<hr>
<br>

# CSS Background color : 
  
#### Syntax :
  
         <h1 style="background-color:DodgerBlue;">Hello World</h1>
         <p style="background-color:black;">Lorem ipsum...</p>
         
#### Output :
      
   <img width="132" alt="Screenshot 2021-09-24 at 6 39 38 PM" src="https://user-images.githubusercontent.com/84325475/134679784-ef4c6145-ea07-4874-a7ad-042017283537.png">

<br>

# CSS Text color :

#### Syntax :
 
        <h1 style="color:Tomato;">Hello World</h1>
        <p style="color:DodgerBlue;">Lorem ipsum...</p>
        <p style="color:MediumSeaGreen;">Ut wisi enim...</p>


#### Output :

<img width="115" alt="Screenshot 2021-09-24 at 6 39 59 PM" src="https://user-images.githubusercontent.com/84325475/134680345-c6c771c3-1ca7-447b-901e-eb5daa2a1a19.png">


<br>

# CSS Border color :

#### Syntax :

        <h1 style="border:2px solid Tomato;">Hello World</h1>
        <h1 style="border:2px solid DodgerBlue;">Hello World</h1>
        <h1 style="border:2px solid Violet;">Hello World</h1>
        
        
  #### Output :
  
<img width="464" alt="Screenshot 2021-09-24 at 6 40 19 PM" src="https://user-images.githubusercontent.com/84325475/134680356-7e3e1192-4af4-4020-8140-70237300e5da.png">

<br>

# CSS Color values :
 
 
 #### Syntax : 
 
          <h1 style="background-color:rgb(255, 99, 71);">...</h1>
          <h1 style="background-color:#ff6347;">...</h1>
          <h1 style="background-color:hsl(9, 100%, 64%);">...</h1>

          <h1 style="background-color:rgba(255, 99, 71, 0.5);">...</h1>
          <h1 style="background-color:hsla(9, 100%, 64%, 0.5);">...</h1>
 

#### Output :


<img width="962" alt="Screenshot 2021-09-24 at 6 45 26 PM" src="https://user-images.githubusercontent.com/84325475/134680505-ed0dc00e-284e-45eb-83c2-ed457a8ac270.png">

<img width="912" alt="Screenshot 2021-09-24 at 6 46 26 PM" src="https://user-images.githubusercontent.com/84325475/134680655-2b65f06f-5b33-4c06-86b6-f8d642374b98.png">


