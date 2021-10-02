  
# Data Attributes in Javascript


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

To get a data attribute through the dataset object, get the property by the part of the attribute name after data-
  
For eg.
  const article = document.querySelector('#tws');
  // This also works
  // const article = document.getElementById("tws")
  article.dataset.columns // "5"
  article.dataset.parent // "Wings Phantom Pro" 
 
In this each property is a string and can be read and written. In our case we can reset it using
  article.dataset.columns = 7  //This would change that attribute value to "7".

Here we can  notice two interesting things
  
Firstly, all  properties are converted from snake case, to camel case, in the output. This is because in JavaScript object properties are primarily written as camel case so this just makes working with the JavaScript object much easier.

Second, if some property has a value of "". This is because any data attribute without a value is assumed to have an empty string as its value.
In order to access an individual data attribute we just access it like a property on an object since dataset is just an object.
  
### Writing Data Attributes
In order to create a new data attribute in JavaScript we just need to add a new property to the dataset object with a value.

For eg.
  article.dataset.new = "Lets GWOC"
  console.log(div.dataset.test)
  // Lets GWOC will be printed in the console as output
  
### Updating Data Attributes
Let’s say that we now want to update the value of a data attribute. This is incredibly easy since it works just like a normal object. We just need to set the value of our dataset property to the new value and it will update the HTML for us.

For eg.
  article.dataset.columns = 4
  console.log(div.dataset.firstName)
  // 4
  





  

