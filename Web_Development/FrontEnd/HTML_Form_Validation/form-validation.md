# Form Validation in HTML

#### Lets Understand what actually this means:

Form validation is a "technical process where a web-form checks if the information provided by a user is correct." The form will either alert the user that they messed up and need to fix something to proceed, or the form will be validated and the user will be able to continue with their registration or further process.

For example, Twitter won't let me use an email address that is incorrectly formatted, and gives me an error message when I try to do so:

<p align="center">
    <img align="center" src="https://user-images.githubusercontent.com/26524467/136819530-05c23fee-e34a-4417-b7aa-3a57ca2b9990.png" width="40%" height="30%"/>
    <p align="center"> <a href="https://www.itsolutionstuff.com/post/laravel-53-form-input-validation-rules-example-with-demoexample.html">Source</a> </p>
</p>


But when I correctly enter my email address, it works, and the error message disappears:

<p align="center">
    <img align="center" src="https://user-images.githubusercontent.com/26524467/136819701-92374062-7979-47fe-a70f-7386ac67a9a6.png" width="40%" height="40%"/>
    <p align="center"> <a href="https://www.itsolutionstuff.com/post/laravel-53-form-input-validation-rules-example-with-demoexample.html">Source</a> </p>
</p>


Basically, validation makes sure that the provided text is in the right format (example: for email, _user@example.com_), and if the text fits the qualifications for a suitable entry (example: the email isn't already registered, or the password fits the criteria).

In general, there are two main types of form validation:

1. After submit validation
2. Inline validation

## After Submit validation

* After submit validation is probably what you're most used to. It's also usually a worse experience than inline validation.

* When you fill out the whole form and then press submit. After that, if you made any mistakes, the page will tell you what you did wrong. Sometimes, when errors stack up (especially when they're all shown at the top), it can get quite frustrating, leading people to abandon forms:

<p align="center">
    <img src="https://user-images.githubusercontent.com/26524467/136820615-2cc02d9c-b002-4262-a8c2-272d87b93b04.png" width="50%" height="450px"/>
    <p align="center"> <a href="https://www.w3resource.com/javascript/form/javascript-sample-registration-form-validation.php">Source</a> </p>
</p>

## Inline validation

* Inline validation is a wonderful way to reduce friction in forms. It’s becoming more and more common, probably because we’ve seen compelling case studies supporting its effectiveness.

* When validation messages are shown immediately after the user types in data to form fields. Usually, information is shown next to the fields and encourages the user to take immediate action.


<p align="center">
    <img src="https://user-images.githubusercontent.com/26524467/136821156-ab6f7e45-f4bb-4a29-862f-3f6738291359.png" width="50%" height="450px"/>
    <p align="center"> <a href="https://www.w3resource.com/javascript/form/javascript-sample-registration-form-validation.php">Source</a> </p>
</p>



Now, the forms can be created through following ways:

1. Using HTML5 built-in functionality
2. Using JavaScript


## Using HTML5 built-in functionality Sample:

* HTML5 provides this feature of form validation without using JavaScript. 
* Form elements will have validation attributes added, which will enable the form validation for us automatically. 
* Validation attributes allow us to specify various kinds of rules on our form elements. They allow us to set the length of the data, set a restriction on the values of the data, etc.

<br/>

```html
<!DOCTYPE html>
<html>
<head>
    <style>
        .formData {
            padding-top: 20px;
            padding-bottom: 20px;
            padding-left: 10px;
            background-color: darkcyan;
        }

        form {
            font-size: 30px;
        }

        form input {
            margin-left: 10px;
            font-size: 15px;
        }
    </style>
</head>
<body>
    <div class = "formData" >
        <form action = "#" >
            Name: <input type = "text" name = "name" required>
            <input type = "submit"/>
        </form>
    </div>
</body>
</html>
```
<br/>

# Examples 

* The simplest change you can make to your forms is to mark a text input field as 'required':

    ```html
        Name: <input type="text" name="name" ```required```>
    ```

* New text INPUT types

    ```html
        Email Address: <input type="email" name="email" required placeholder="Enter a valid email address">
    ```
    
* INPUT type="url"

    ```html
        Website: <input type="url" name="website" required>
    ```

* INPUT type="number" and type="range"

    ```html
        Age: <input type="number" size="6" name="age" min="18" max="99" value="21"> <br>
        Satisfaction: <input type="range" size="2" name="satisfaction" min="1" max="5" value="3">
    ```

* INPUT type="password"

    ```html
        password: <input type="password">
    ```

* Other HTML5 INPUT types

    * color
    * date
    * datetime
    * datetime-local
    * month
    * search
    * tel
    * time
    * week

* INPUT patterns for different data types

    * URL input pattern:

        ```html
            input type="url" pattern="https?://.+"
        ```

    * IPv4 Address input pattern:

        ```html
            input type="text" pattern="\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}"
        ```

    * Date input pattern (dd/mm/yyyy or mm/dd/yyyy):

        ```html
            input type="text" pattern="\d{1,2}/\d{1,2}/\d{4}"
        ```

    * Price input pattern:

        ```html
            input type="text" pattern="\d+(\.\d{2})?"
        ```

    * Latitude/Longitude input pattern:

        ```html
            input type="text" pattern="-?\d{1,3}\.\d+"
        ```
<hr/>

## References 

* [Source-1](https://cxl.com/blog/form-validation/)

* [Source-2](https://developer.mozilla.org/en-US/docs/Web/HTML)
