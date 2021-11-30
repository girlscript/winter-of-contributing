# Javascript PopUp Boxes
![javascript](https://user-images.githubusercontent.com/70684116/140647246-db83c486-a502-4c05-aac5-6d6960183875.png)


## What and why?
#### What is Javascript?
- JavaScript is a programming language used on both the client side and the server side that allows you to customize web pages.
#### What are popups?
- Javascript provides features such as popup boxes used to display a message and for user interaction.There are three types of popup boxes used in different situations.
1. Alert Box: Used when an alert message is displayed to a user. When a user clicks on anything on a web page and when a popup box functionality is to be added to an item. A rectangular box is displayed in the middle part of a web page. The developer can add any message that will be displayed in the popup box. The following is the code to add a popup box function to the button. At the click of a button, an alert box is displayed.

```
<html>
    <body>
        <script>
            function showAlert() {
                alert("Hi, this is an Alert box");
            }
        </script>
        <button onclick="showAlert()">Show Alert</button>
    </body>
</html>

```
The following output is displayed:-

![Capture](https://user-images.githubusercontent.com/70684116/140647510-9f437947-af4a-43e7-b744-17d753ef14ad.PNG)



2. Prompt Box: - A type of pop-up box used to retrieve user input for reuse. After entering the required information the user should click OK to proceed to the next step and by pressing the Cancel user button which returns the empty value. The first argument represents the message to be displayed while the second is the default value that will be displayed in the input field.

```
<html>
    <head>
        <script type="text/javascript">
            function promptUser() {
                let userInput = prompt("Hi, What's your name?", "John Wick");
                if(userInput != null) {
                    document.getElementById("result").innerHTML = "Hello " + userInput + ", good day!";
                }
            }
        </script>
    </head>
    <body>
        <button onclick="promptUser()">Click on me!</button>
        <p id="result"></p>
    </body>
</html>
```


The following output is displayed:-


![Capture1](https://user-images.githubusercontent.com/70684116/140647791-a3080f6a-c125-4eb1-bb80-5ab7d8c09a9d.PNG)


  3. Confirm Box: - It is a type of junk box used to obtain authorization or authorization from a user. Contains two buttons OK and Cancel. When you press OK it returns the truth and redirects or performs the action while on the other hand pressing cancels it returns false and the action is rejected.
 
 ```
 <html>
<head>
</head>
<body>
    <script type="text/javascript">
        a = confirm(" Want to Proceed ?");
        document.write("Your have clicked on : " + a);
    </script>
</body>
</html>
 ```

 
The following output is displayed:-

![Capture](https://user-images.githubusercontent.com/70684116/140647697-fb587628-ea21-4b11-bf15-5569ea6566ea.PNG)





