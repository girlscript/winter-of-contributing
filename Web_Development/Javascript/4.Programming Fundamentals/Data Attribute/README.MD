  
# Data Attributes in Javascript

<img src="https://user-images.githubusercontent.com/74582422/135737483-6fc2bfd3-cec6-443a-a6bf-841721ee5682.png" 
     width="150" 
     height="150" />



### Attributes
Before jumping on to data attributes in Javascript , we first need to understand about what are attributes in Javascript.
So , attributes in Javascript are linked to HTML.In HTML, tags may have attributes. When the browser parses the HTML to create DOM objects for tags, it recognizes standard attributes and creates DOM properties from them.

For eg.
<br>
![image](https://user-images.githubusercontent.com/74582422/135728535-e8dbffd7-fd3b-475f-bc96-695ce862e59c.png)

<!-- <body id="test" something="non-standard">
  <script>
    alert(document.body.id); // test
    // not defined  attribute does not yield anything
    alert(document.body.something); // this is undefined
  </script>
</body> -->

### Data Attributes
Data Attributes are custom HTML attributes that can be added to any HTML5 item and allow us to store extra information we can use and manipulate.The data is localised to the web page or application they’re on and therefore can only be manipulated on that web page or application.

### Syntax
The syntax for the same is simple. 
Any attribute on any element whose attribute name starts with "data-" is a data attribute. 

For eg.
<br>
![image](https://user-images.githubusercontent.com/74582422/135728503-fc929bbc-3c00-4578-b5c3-2e1304935b6d.png)
<br>
<!-- <article>
  id="TWS"
  data-columns="5" //Here we have used data- to define a data attribute
  data-parent="Wings Phantom Pro">
  ...
</article> -->

Also , there are various instance when the standard data attribute for one element is not present for other .
For instance, "type" is standard for <input> (HTMLInputElement), but not for <section> (HTMLBodyElement). Standard attributes are described in the specification for the corresponding element class.
  
### Accessing Data Attributes in Javascript
Reading the values of these attributes out in JavaScript is also very simple. We can use getAttribute() with their full HTML name to read them, but the standard defines a simpler way: with a DOMStringMap you can read out via a dataset property.
There are 2 methods to do the same :
  <ul>
    <li>Using the .dataset property.</li>
    <li>Using the .getAttribute property.</li>
  </ul>
To get a data attribute through the dataset object, get the property by the part of the attribute name after data-
  
For eg.
  const article = document.querySelector('#tws');<br>
  // This also works<br>
  // const article = document.getElementById("tws")<br>
  article.dataset.columns // "5"<br>
  article.dataset.parent // "Wings Phantom Pro" <br>
 
In this each property is a string and can be read and written. In our case we can reset it using
  article.dataset.columns = 7  //This would change that attribute value to "7".

Here we can  notice two interesting things
  
Firstly, all  properties are converted from snake case, to camel case, in the output. This is because in JavaScript object properties are primarily written as camel case so this just makes working with the JavaScript object much easier.

Second, if some property has a value of "". This is because any data attribute without a value is assumed to have an empty string as its value.
In order to access an individual data attribute we just access it like a property on an object since dataset is just an object.
  
### Writing Data Attributes
In order to create a new data attribute in JavaScript we just need to add a new property to the dataset object with a value.

For eg.<br>
  article.dataset.new = "Lets GWOC"<br>
  console.log(div.dataset.test)<br>
  // Lets GWOC will be printed in the console as output<br>
  
### Updating Data Attributes
Let’s say that we now want to update the value of a data attribute. This is incredibly easy since it works just like a normal object. We just need to set the value of our dataset property to the new value and it will update the HTML for us.

For eg.<br>
  article.dataset.columns = 4<br>
  console.log(article.dataset.columns)<br>
  // 4<br>
  
### Deleting Data Attributes
Deleting data attributes is a bit different since we need to actually remove the property from our object. This is because if we try setting the value to undefined or null the dataset object will still have a reference to that property with that value of undefined or null and will set the value of our HTML data attribute to the string null or undefined.
To delete an element we need to use the delete keyword to remove it completely from the object.

For eg.<br>
  delete article.dataset.new<br>
  console.log(article.dataset.new)<br>
  // undefined
  
  
  
## Real World Example
Here’s the scenario: we want a simple HTML/CSS/Javascript item picker (or maybe tab) component to allow users to choose from a series of Cool Earphones on an ecommerce website.
We load all of the relevant data on page load and store it all in Data Attributes within the component’s relevant HTML elements.

So , We’ll be storing:

The product title.
The product image URL.
The product link.
  
For the User Interface, we’re going to display the product title’s as clickable links, with a HTML div underneath.
The first product will be displayed on page load and the idea is for the user to click the product links to display the relevant product and information.  
 
You want to write JavaScript so that the first button adds to the cart and the second button opens buy now, but we want to do this in a way that is reusable so if we add a third button that opens a new we don’t need to write any new JavaScript code.

This may sound really difficult at first, but essentially all we need is some way to link each button to their respective modal in the HTML. This is where data attributes come in.

We can set a custom data attribute on each button that references the modal they are linked to. In our case we can use the id of each button as our reference.  <br>
  ![image](https://user-images.githubusercontent.com/74582422/135737461-27ab7131-bce2-469c-9de1-01e957acbafa.png)

<!--   <button data-model-id="model-1">CART</button><br>
  <button data-model-id="model-2">BUY NOW</button><br>
  <div id="model-1">Model 1</div><br>
  <div id="model-2">Model 2</div><br>
   -->
So now we have a way to access the id of the modal linked to each button inside JavaScript.<br>
  const buttons = document.querySelectorAll("[data-model-id]")<br>
  buttons.forEach(button => {<br>
  button.addEventListener("click", () => {<br>
  const modelId = button.dataset.modelId<br>
    const model = document.getElementById(modelId)<br>
    model.classList.add("show")<br>
    })<br>
  })

In the above code we are selecting all elements that contain our custom data-model-id attribute. We are then looping through them and adding a click event listener to each one. Inside this event listener we are using the modal id to get the modal link to that button and adding the show class so it is now visible.

This code is also flexible since it will get any element with the custom data-modal-id attribute. This means that if we add a new button that references a new modal we won’t need to write any additional JavaScript.

  
## Conclusion
Data attributes in JavaScript are useful and very helpful from a developer's perspective .They allow us to write extremely flexible code which means we can spend more time writing the HTML for our project rather than worrying about writing a custom event listener for each new element we add in our script.There syntax is also simple and easy to understand and thus should be a proper help for the web programmer.
  
  
### References
  https://javascript.info/ <br>
  https://www.thewebdeveloperguide.com/ <br>
  https://www.w3schools.com/ <br>
  Book - Object Oriented Javascript by Nikolas Zakas
  

#### Thanks a Ton!

