# Javascript PopUp boxes
![javascript](https://user-images.githubusercontent.com/70684116/140647246-db83c486-a502-4c05-aac5-6d6960183875.png)


## What and why?
#### What is Javascript?
- JavaScript is a programming language used both on the client-side and server-side that allows you to make web pages interactive.
#### What are Popup boxes?
- Javascript provides features such as popup boxes to display a message and to interact with the user and there are three types of popup boxes which are used in different situations.
1. Alert Box: It is used when a warning message is to displayed to the user. When a user clicks on anything on the webpage and if the popup box functionality is added to the object. A rectangular box is displayed on the top mid side of the webpage. The developer can add any message to be displayed in the popup box. Following is the code to add popup box functionality to a button. On clicking the button a alert box is displayed. The alert("") function helps us.
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
Following output is displayed:-

![Capture](https://user-images.githubusercontent.com/70684116/140647510-9f437947-af4a-43e7-b744-17d753ef14ad.PNG)


2. Prompt Box:- It is a type of pop up box which is used to get the user input for further use. After entering the required details user have to click ok to proceed next stage else by pressing the cancel button user returning the null value. The first argument stands for the message to be displayed while the second is for the default value to displayed in the input place.
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

Following output is displayed:-


![Capture1](https://user-images.githubusercontent.com/70684116/140647791-a3080f6a-c125-4eb1-bb80-5ab7d8c09a9d.PNG)

  3. Confirm Box:- It is a type of pop-up box that is used to get authorization or permission from the user. It contains Two buttons OK and Cancel. On pressing OK it returns true and redirects or performs the action while on the other hand on pressing cancel a false is returned and the action is discarded.
  
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
Following output is displayed:-

![Capture](https://user-images.githubusercontent.com/70684116/140647697-fb587628-ea21-4b11-bf15-5569ea6566ea.PNG)



