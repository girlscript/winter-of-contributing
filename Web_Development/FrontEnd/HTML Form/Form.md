## HTML FORM
> Today we are talking about HTML form, it's mostly for beginners but everyone needs a refresher sometimes.
 # Form Element 

**This is the first element which we will learn. This element wraps all    the other elements that go inside of our form. This is the form  element.**


    <!DOCTYPE html>
    <html>
        <head>
            <meta charset="utf-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>Sign Up Form</title>
            <link rel="stylesheet" href="css/main.css">
        </head>
        <body>
          <form action="index.html" method="post">
          
          </form>
        </body>
    </html>

**Our form won’t submit the data anywhere because it is not connected to a server. To connect our form to a server and process our data, we can use any server-side language like Node, Python, Ruby, or PHP. The part of processing the data involves two important attributes that are attached to the form element. Let’s take a look at those attributes.**

# Attributes

 1.  **action:**  The action attribute is the web address (URL) of a program that processes the information submitted by our form.
 2.  **method:**  It is the  [HTTP method](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods)  that the browser uses to submit the form, the possible values are  **POST**  and  **GET.**

 3.   **POST**  — Data from the body of the form is sent to the server.

 4. **GET** — Data is sent inside of the URL and parameters are separated with a question mark.

## Input Element

The input element is the most commonly used form element. It is used to make a  **text field**  where the user can type some  **information**  for example  **email**,  **password**  etc.


##   List of all  _input types_  in html5

 ```
<input type="button">
<input type="checkbox">
<input type="color">
<input type="date">
<input type="datetime-local">
<input type="email">
<input type="file">
<input type="hidden">
<input type="image">
<input type="month">
<input type="number">
<input type="password">
<input type="radio">
<input type="range">
<input type="reset">
<input type="search">
<input type="submit">
<input type="tel">
<input type="text">
<input type="time">
<input type="url">
<input type="week">
```

## Type 

**type**

The  **type**  attribute indicates what kind of input we want. If we give a value of  **text**  to the  **type**  attribute, than what we mean here is that the value which we are entering into the input field is of type text. There are many possible values for this particular attribute. Some possible values are email, tel for telephone and password etc.

Example: When you login into any of your accounts (Amazon/Netflix), you need to enter two things:  **email**  and  **password**. So in this particular case the  **input**  element is used. The  **type**  attribute is given with the value of  **email**  and  **password**  respectively.


     <!DOCTYPE html>
        <html>
            <head>
                <meta charset="utf-8">
                <meta name="viewport" content="width=device-width, initial-scale=1.0">
                <title>Sign Up Form</title>
                <link rel="stylesheet" href="css/main.css">
            </head>
            <body>
              <form action="index.html" method="post">
    <input type="text" id="name" name="student_name">
    <input type="email" id="mail" name="student_email">
    <input type="password" id="password" name="student_password">
              </form>
            </body>
        </html>





**id**

The ID attribute is not mandatory, but it’s a good idea to add one. In some cases, this is helpful for targeting elements with CSS/JavaScript. The ID attribute is added so that we can associate  **labels**  to  **specific form controls**.

**name**

The name attribute is necessary. When a form is submitted to the server side code, the server can understand the form data and process the values appropriately.

**placeholder**

It is a short hint which is displayed in the input field before the user enters a value. As the user starts typing in the input field the placeholder disappears.

## Textarea Element

Sometimes a single line of text is not enough and a simple input element won’t work. For example, some websites have a contact form for people to type their queries or messages. In these cases, it’s best to use the  `textarea`  element.

The  **<textarea>**  is not a self-closing tag, so we need to type both the opening and the closing tag. (<textarea></textarea>)

**Attributes:**

-   **id:** Same as mentioned above in <input/> element.
-   **name:**  Same as mentioned above in <input/> element.
-   **cols:** Specifies the visible width of a text area.
-   **rows:** Specifies the visible number of lines in a text area.
  


#


    <!DOCTYPE html>
    <html>
        <head>
            <meta charset="utf-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>Sign Up Form</title>
            <link rel="stylesheet" href="css/normalize.css"> 
            <link rel="stylesheet" href="css/main.css">
        </head>
        <body>
          <form action="index.html" method="post">
              <textarea id="bio" name="student_bio"></textarea>
          </form>
        </body>
    </html>

 


## We can also have:

-   A label -->  `<label for="username">Click me to focus on input</label>`
-   A Disabled input -->  `<input type="text" placeholder="This is a text input Disabled" disabled>`


## Label Element

Right now it’s impossible for the user to tell which form control does what. There’s no way to know where you will be entering the email and where you will be entering the password. The form looks very incomplete and messy.

We can label each one of our forms controls using the label element.

The most used attribute with a  **label**  is  **for.**

**Attributes:**

-   **for:**  The  **for**  attribute associates the label with a particular form element. The way it  **matches is by ID**. As you can see in the above example the  **value of the ID**  attribute given to the input element is  **email.** The value of the  **for** attribute given to the label element is also  **email,**  so both of them are associated with each other.

>     > <label for=id1>Checkbox</label>
>     > 
>     > <input type=checkbox id=id1>

>     > <label for=id2>Password</label>
>     > 
>     > <input type=password id=id2>

 

 
## Checkboxes 

Sometimes you might have a group of predefined options. You want the user to be able to select multiple options and not just one of them. That’s where checkboxes are useful.

**Attributes:**

-   **name:**  Same as mentioned above in <input/> element.
-   **value:** Since we’re creating these predefined options, we need to specify what the value should look like when it’s submitted. So, we use the  **value** attribute to specify the values to predefined options.
-   **checked:**  By default, a checkbox input is unchecked. You can set the default state to checked by using the attribute called  **checked**. Remember this is a boolean attribute.

    > <input type="checkbox" **checked** id="name"   value="abhishek"
    > name="user_name" />



## Select Menus 

Sometimes, when you’re creating a form, you don’t want the user to be able to type in the text. Rather, you might want them to pick from  **some preset options that you provide**.

Anytime you have a list of options that’s longer than, say, four or five things, it’s best to go with the select menu because it saves space.

Let’s say that our form is targeted for students who are going to seek admission at a university. We want to allow students to select from a predefined list of university programs.

The select menu element is made using opening and closing  **<select>**  tag.

**<select>**  — The select element renders a  **drop-down menu**  that contains selectable options. The  **select**  element won’t do anything, by itself. This form element actually needs additional elements inside of it, exactly like  elements needs   elements. The elements we put inside of  **select** element are called  **option**  elements.

**Attributes:**

-   **name:** Same as mentioned above in <input/> element.

**<option>**  — The option element represents one of the choices that a user can choose in a select menu. The  **<option>**  element uses an  **attribute**  called  **value.**

**Attributes:**

-   **value:**  When you submit a form to server-side code, each form element has an associated value for text inputs and text areas. That value is whatever the user types into the field. However, since we’re creating these predefined options, we need to specify what the value should look like when it’s submitted. So, we use the  **value**  attribute to specify the values to predefined options.

```
<!-- The second value will be selected initially -->
<select name="choice">
  <option value="first">First Value</option>
  <option value="second" selected>Second Value</option>
  <option value="third">Third Value</option>
</select>
```




## Radio Buttons

Select menus are great if you have lots of options. If you have something like 5 or fewer options, it’s better to use radio buttons.

The difference between Select Menu and Radio Button is that radio buttons show you all the options at once. Like the select menu the user can only pick from one of them.

**Attributes:**

-   **name:**  Same as mentioned above in <input/> element.
-   **value:** Since we’re creating these predefined options, we need to specify what the value should look like when it’s submitted. So, we use the  **value** attribute to specify the values to predefined options.


```
<form>
  <p>Please select your preferred contact method:</p>
  <div>
    <input type="radio" id="contactChoice1"
     name="contact" value="email">
    <label for="contactChoice1">Email</label>

    <input type="radio" id="contactChoice2"
     name="contact" value="phone">
    <label for="contactChoice2">Phone</label>

    <input type="radio" id="contactChoice3"
     name="contact" value="mail">
    <label for="contactChoice3">Mail</label>
  </div>
</form>
```
##  Reference

>   
> [w3schools](https://www.w3schools.com/html/html5_semantic_elements.asp)
> [MDN
> docs](https://developer.mozilla.org/en-US/docs/Glossary/Semantics#semantics_in_html)

*** 