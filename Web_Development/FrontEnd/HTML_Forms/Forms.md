# HTML FORMS :page_facing_up:

**Form is a HTML element that represents a section containing interactive controls for submitting information.**
The data collected from user is posted to back-end application such as CGI, ASP Script or PHP script etc, which in-turn is processed on defined logic.

### SYNTAX: :white_check_mark:

```
<form>
.
form elements
.
</form>
```

### ATTRIBUTES FOR FORM SUBMISSION :white_check_mark:

**action** :heavy_check_mark:

The URL that processes form submission.


**enctype** :heavy_check_mark:


enctype attribute is used to specify how the browser encodes the data before it sends it to the server.

Possible values:
application/x-www-form-urlencoded: The default value.
multipart/form-data: Use this if the form contains <input> elements with type=file.
text/plain: Introduced by HTML5 for debugging purposes.


**method** :heavy_check_mark:

The HTTP method to submit the form with. Possible (case insensitive) values:
POST    :  The POST method; form data sent as the request body.
GET     :  The GET method; form data appended to the action URL with a ? separator.
DIALOG  :  When the form is inside a <dialog>, closes the dialog on submission.


**novalidate** :heavy_check_mark:

This Boolean attribute indicates that the form shouldn't be validated when submitted. @@ 
If this attribute is not set and boolean value is 0, the form is validated @@


**target** :heavy_check_mark:
diff
Indicates where to display the response after submitting the form. In HTML5, it is a name/keyword for a browsing context (for example, tab, window, or iframe). 
The following keywords have special meanings:

self (default): Load into the same browsing context as the current one.
blank: Load into a new unnamed browsing context.
parent: Load into the parent browsing context of the current one.
top: Load into the top-level browsing context (i.e., the browsing context that is an ancestor of the current one and has no parent).


### HTML Form Controls

**The label tag** :white_check_mark:

The <label> HTML element represents a caption for an item in a user interface.

To associate the <label> with an <input> element, you need to give the <input> an id attribute.
The <label> then needs a for attribute whose value is the same as the input's id.

         <label for="username">Enter your username:</label>
         <input id="username">
         
Alternatively, you can nest the <input> directly inside the <label>
In which case the for and id attributes are not needed because the association is implicit:
``` 
         <label>Do you like peas?
             <input type="checkbox" name="peas">
         </label>

```

**textarea** :white_check_mark:

This is used when the user is required to give details that may be longer than a single sentence. 
Attributes - rows, cols
	
```
       <textarea rows = "5" cols = "50" name = "description">
            Enter description here...
       </textarea>
```


**The input tag** :white_check_mark:

The HTML <input> element is the most used form element.
An <input> element can be displayed in many ways, depending on the type attribute.

1. **input type="text"** :heavy_check_mark:
<input> element of type "text" are used to define a single-line input text field.
```       
         <label>Enter User name</label>
         <input type="text" name="username">
```      
@@ATTRIBUTES:@@

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| type       | Indicates the type of input control and for checkbox input control it will be set to radio.        |
| name       | Used to give a name to the control which is sent to the server to be recognized and get the value. |
| value      | The value that will be used if the radio box is selected.                                          |
| size       | Allows to specify the width of the text-input control in terms of characters.                      |
| maxlength  | Allows to specify the maximum number of characters a user can enter into the text box              |
| required   | Specifies that the input field is required (for form validation)                                   |



2. **input type="password"** :heavy_check_mark:

The <input> element of type "password" allow a user to enter the password securely in a webpage.
The entered text in password filed converted into "*" or ".", so that it cannot be read by another user.
	
```
            <label>Enter Password</label><br>  
            <input type="Password" name="password">
```
	
3. **input type="color"** :heavy_check_mark:

The <input> type "color" is used to define an input field which contains a colour. 
It allows a user to specify the colour by the visual colour interface on a browser.

```
     <input type="color" name="upclick" value="#a52a2a"> 
```

4. **input type="date"** :heavy_check_mark:

The <input> element of type "date" generates an input field, which allows a user to input the date in a given format. 
A user can enter the date by text field or by date picker interface.

```
        <input type="date" name="date">
```

5. **input type="datetime-local"** :heavy_check_mark:

The <input> element creates input filed which allow a user to select the date as well as local time in the hour and minute without time zone information.

```
        <input type="datetime-local" name="meetingdate">
```

6. **input type="email"** :heavy_check_mark:

The <input> type "email" creates an input filed which allow a user to enter the e-mail address with pattern validation.
The multiple attributes allow a user to enter more than one email address.

```
    <label><b>Enter your Email-address</b></label>  
    <input type="email" name="email" required>  
   
```

7. **input type="month"** :heavy_check_mark:

The <input> type "month" creates an input field which allows a user to easily enter month and year in the format of "MM, YYYY" where MM defines month value,
and YYYY defines the year value.

```
     <label>Enter your Birth Month-year: </label>  
     <input type="month" name="newMonth">  
```

8. **input type="number"** :heavy_check_mark:

The <input> element type number creates input filed which allows a user to enter the numeric value.
You can also restrict to enter a minimum and maximum value using min and max attribute.

```
       <label>Enter your age: </label>  
       <input type="number" name="num" min="50" max="80">
 ```
 
 9. **input type="url"** :heavy_check_mark:

 The <input> element of type "url" creates an input filed which enables user to enter the URL.
  
```
      <input type="url" name="website" placeholder="http://example.com">
 ```
 
 10. **input type="week"** :heavy_check_mark:
 
 The <input> type week creates an input field which allows a user to select a week and year form the drop-down calendar without time zone.

```
     <label><b>Select your best week of year:</b></label><br><br>  
     <input type="week" name="bestweek">  
```

11. **input type="search"** :heavy_check_mark:

The <input> type "search" creates an input filed which allows a user to enter a search string.
These are functionally symmetrical to the text input type, but may be styled differently.
  
```
       <label>Search here:</label>  
       <input type="search" name="q">  
       <input type="submit" value="search"> 
```

12. **input type="tel"** :heavy_check_mark:

The <input> element of type ?tel? creates an input filed to enter the telephone number.
The "tel" type does not have default validation such as email, because telephone number pattern can vary worldwide.
 
```
      <label><b>Enter your Telephone Number(in format of xxx-xxx-xxxx):</b></label>  
      <input type="tel" name="telephone" pattern="[0-9]{3}-[0-9]{3}-[0-9]{4}" required>  
```

13. **Checkboxes Controls** :heavy_check_mark:

Checkboxes are used when more than one option is required to be selected.
They are also created using HTML <input> tag but type attribute is set to checkbox.

@@Attributes:@@ 

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| type       | Indicates the type of input control and for checkbox input control it will be set to radio.        |
| name       | Used to give a name to the control which is sent to the server to be recognized and get the value. |
| value      | The value that will be used if the radio box is selected.                                          |
| checked    | Set to checked if you want to select it by default.                                                |


14. **Radio Box Controls** :heavy_check_mark:

**radio:**

Radio buttons are used when out of many options, just one option is required to be selected.

@@Attributes:@@

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| type       | Indicates the type of input control and for checkbox input control it will be set to radio.        |
| name       | Used to give a name to the control which is sent to the server to be recognized and get the value. |
| value      | The value that will be used if the radio box is selected.                                          |
| checked    | Set to checked if you want to select it by default.                                                |




15. **Select Box Controls** :heavy_check_mark:

A select box, also called drop down box which provides option to list down various options in the form of drop down list.
A user can select one or more options.

SYNTAX:

```diff
+<select name = "dropdown">
     <option value = "Maths" selected>Maths</option>
     <option value = "Physics">Physics</option>
+</select>
	
```

@@ ATTRIBUTES OF SELECT ATTRIBUTE: @@

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| type       | Indicates the type of input control and for checkbox input control it will be set to radio.        |
| size       | This can be used to present a scrolling list box.                                                  |
| multiple   | If set to "multiple" then allows a user to select multiple items from the menu.                    |

 
@@ ATTRIBUTES OF OPTION ATTRIBUTE: @@

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| value      | The value that will be used if an option in the select box box is selected.                        |
| selected   | Specifies that this option should be the initially selected value when the page loads.             |
| label      | An alternative way of labeling options.                                                            |



16. **File Select boxes** :heavy_check_mark:

If you want to allow a user to upload a file to your web site, you will need to use a file upload box, also known as a file select box.
This is also created using the <input> element but type attribute is set to file.

SYNTAX:
```
         <input type = "file" name = "fileupload" accept = "image/*" />
```
	
@@ ATTRIBUTES: @@

| Attribute  |                                   Description                                                      |
| ---------- | -------------------------------------------------------------------------------------------------- |
| name       | Used to give a name to the control which is sent to the server to be recognized and get the value. |
| accept     | Specifies the types of files that the server accepts.                                              |

	

17. **Hidden Controls** :heavy_check_mark:


Hidden form controls are used to hide data inside the page which later on can be pushed to the server.
This control hides inside the code and does not appear on the actual page.

SYNTAX:
```
        <input type = "hidden" name = "pagename" value = "10" />
   
```

18. **Clickable Buttons** :heavy_check_mark:


There are various ways in HTML to create clickable buttons.
You can also create a clickable button using <input>tag by setting its type attribute to button.

@@ ATTRIBUTES: @@

| Attribute  |                                   Description                                                       |
| ---------- | --------------------------------------------------------------------------------------------------  |
| submit     | This creates a button that automatically submits a form.                                            |
| reset      | This creates a button that automatically resets form controls to their initial values.              |
| button     | This creates a button that is used to trigger a client-side script when the user clicks that button |
| image      | This creates a clickable button but we can use an image as background of the button.                |

  
SYNTAX:
```diff
         <input type = "submit" name = "submit" value = "Submit" />
         <input type = "reset" name = "reset"  value = "Reset" />
         <input type = "button" name = "ok" value = "OK" />
         <input type = "image" name = "imagebutton" src = "/html/images/logo.png" />

```


### SAMPLE FORM - :white_check_mark:

```diff
<form class="myForm" method="get" enctype="application/x-www-form-urlencoded" action="/html/codes/html_form_handler.cfm">

<p>
<label>Name
<input type="text" name="customer_name" required>
</label> 
</p>

<p>
<label>Phone 
<input type="tel" name="phone_number">
</label>
</p>

<p>
<label>Email 
<input type="email" name="email_address">
</label>
</p>

<fieldset>
<legend>Which taxi do you require?</legend>
<p><label class="choice"> <input type="radio" name="taxi" required value="car"> Car </label></p>
<p><label class="choice"> <input type="radio" name="taxi" required value="van"> Van </label></p>
<p><label class="choice"> <input type="radio" name="taxi" required value="tuktuk"> Tuk Tuk </label></p>
</fieldset>

<fieldset>
<legend>Extras</legend>
<p><label class="choice"> <input type="checkbox" name="extras" value="baby"> Baby Seat </label></p>
<p><label class="choice"> <input type="checkbox" name="extras" value="wheelchair"> Wheelchair Access </label></p>
<p><label class="choice"> <input type="checkbox" name="extras" value="tip"> Stock Tip </label></p>
</fieldset>

<p>
<label>Pickup Date/Time
<input type="datetime-local" name="pickup_time" required>
</label>
</p>
	
<p>
<label>Pickup Place
<select id="pickup_place" name="pickup_place">
<option value="" selected="selected">Select One</option>
<option value="office" >Taxi Office</option>
<option value="town_hall" >Town Hall</option>
<option value="telepathy" >We'll Guess!</option>
</select>
</label> 
</p>

<p>
<label>Dropoff Place
<input type="text" name="dropoff_place" required list="destinations">
</label>

<datalist id="destinations">
<option value="Airport">
<option value="Beach">
<option value="Fred Flinstone's House">
</datalist>
</p>

<p>
<label>Special Instructions
<textarea name="comments" maxlength="500"></textarea>
</label>
</p>

<p><button>Submit Booking</button></p>

</form>
```


### PREVIEW: :white_check_mark:

[FORM](https://www.quackit.com/html/html_editors/scratchpad/preview.cfm?example=/html/codes/html_form_code_top_aligned_labels)


### REFERENCES: :white_check_mark:

W3schools
tutorialspoints
developer.mozilla.org

