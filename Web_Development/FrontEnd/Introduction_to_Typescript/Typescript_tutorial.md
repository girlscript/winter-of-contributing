<h1 align="center"> TypeScript in five Steps</h1>

<b> How to Install TypeScript?</b>
<p>
<ul>
<li> npm install -g typescript
<li> Your file should be XYZ.<b>ts</b> (ts-> typescript extension)
<li> <b>tsc XYZ.ts</b> to run your file. It will automatically create a javascript file XYZ.js which can be render by browser as browser doesn't render TypeScript file.
</ul>
</p>

<br>

<b>1)What is TypeScript?</b>
<p>
    <ul>
        <li> TypeScript is advance version of JavaScript
        <li> TypeScript allows you to define the datatype  you want to assign for any variable.
        <li> It allows you to use concept of Classes and Interfaces same as any other languages like Java,C++.
    </ul>
</p>
<br>


<b>2)Variables in TypesScript</b>
<p>
<ul> 
    <li>You can create any varaible using let,const and var same as JavaScript.But the recommended use is of let and const.
    <br>
    <li>You can assign datatype to your variable.
    <br>
    -> We can assign only number datatype on variable
    <br>
    Ex: let myVar:<code>number</code>;  <b>myVar</b>
    <br>
    -> You can also assign return type to a function
    let fun=(a:<code> string </code>, b:<code> number</code>)=>number; 
</ul>
</p>
<b>4)Aliases in TypeScript</b>
<p>
<ul> 
    <li>Aliases in TypeScript allows you to make short name for any type.
    <br>
    For ex:
    <b>type data=<code> string|number </code></b>
    <br>
    so now you can use this type  data at the place of  <b>string|number</b>.
    Ex: let age:string|number; also can be written as 
       <b>let  age:data</b>;
    <br>
    <br> Similarly, you can use the aliases to create short name or type for an object which is frequently used in your code.

</ul>
</p>

<b>3)Access Modifiers in TypeScript</b>
<p>
<ul> 
   <li> TypeScript allows you to use access modifiers so that you can make your code more secure and restrict the accessibility your program.
   <br> 
   For ex:
   <br>
   <b>public</b> name;
   <br>
   <b>private</b> NetWroth;
   <br>
   <b>readonly</b> Biography; 


</ul>
</p>

<b>5)Interface in TypeScript</b>
<p>
<ul> 
   <li>You can create an Interface in TypeScript same as other object oriented language.
    <br>
    For ex:
  
    interface Parent{
        private client:string;
        readonly details:string;
        getInfo():void;
    }
<li>You can implements this <b>Parent Interface</b> in any class.
    <br>
    For ex:

    class Child implements Parent{
        //compulsory to implement the methods of Parent Interface.
        getInfo(){
            console.log("In Child Class");
        }
    }

    

</ul>
</p>



