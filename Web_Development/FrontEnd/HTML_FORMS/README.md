## HTML FORMS
An HTML form is used to collect user input. The user input is most often sent to a server 
for processing. Let's have a look at FORMS element.

<hr>

###  The  form  Element
It's a container for different input elements such as text,radio buttons etc.
``` HTML
<form>

 <!-- input elements -->

</form>
```
<hr>

### The label Element 
The <label> tag defines a label for many form elements.The <label> element is useful for 
screen-reader users, because the screen-reader will read out loud the label when the user focus on the input element.
<hr>

### The  input  Element
This element denotes the input taken from user. The input type can be specified using `type` attribute.
Let's have a look at different types of input.

1. **Text Input**

This type of inputs are used to take a text as input from user.

**Example**
```HTML
<form>
  <input type="text" id="fname" name="fname">
</form>
```

2. **Radio buttons**

This element is used to take input from predefined set of values.

**Example**
```HTML
<p> Choose your role </p>
<form>
  <input type="radio" id="contributor" value="contributor">
  <label for="contributor">contributor</label><br>
  <input type="radio" id="mentor" value="mentor">
  <label for="mentor">Mentor</label><br>
</form>
```

3. **The Submit Button**

The `<input type="submit">`defines a button for submitting the form data to a particular form handler.
The form-handler is specified in the form's action attribute.

<hr>
There are many types of inputs , the most used are specified above.


