<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration form</title>
    <style>
        * {
            margin: 0;
            padding: 0;
        }

        body {
            margin: 0px;
            padding: 0px;
            background: url('./img/cd.jpg') no-repeat center center/cover;
            z-index: -1;
            /* background-color: black; */
        }

        /* form box */
        .container {
            border: 2px solid grey;
            display: inline-block;
            width: 45%;
            margin: auto;
            margin-top: 55px;
            margin-left: 380px;
        }

        .container::before {
            content: "";
            position: absolute;
            width: 45%;
            height: 62%;
            z-index: -1;
            opacity: 0.1;
            background-color: grey;
        }

        /* Registration form heading */
        h2 {
            font-size: 60px;
            font-style: italic;
            margin-top: 40px;
            margin-left: 380px;
            color: wheat;
        }

        /* Registration form */
        h1 {
            font-size: 44px;
            /* width: 30%; */
            margin-left: 80px;
            padding: 25px 62px;
            color: wheat;
        }

        .form-group input {
            font-family: 'Baloo Bhai', 'cursive';
            text-align: center;
            display: block;
            width: 350px;
            padding: 9px;
            border: 2px solid;
            margin: 5px auto;
            font-size: px;
            border-radius: 18px;
        }

        /* Checkbox and terms checkbox */
        #check {
            display: inline;
            margin-right: 180px;
            margin-left: 90px;
            margin-top: 2px;
            padding-top: 25px;
        }

        h5 {
            /* display: inline; */
            font-size: 14px;
            font-weight: bold;
            padding-left: 278px;
            margin-top: -18px;
            color: wheat;
        }

        a {
            color: thistle;
        }

        /* Register Now Button */
        .container button {
            display: block;
            color: white;
            background-color: #211f1f;
            margin: 10px auto;
            padding: 10px 10px;
            border: 2px solid grey;
            border-radius: 60px;
            /* font-weight: bold; */
            font-size: 12px;
        }
    </style>

</head>

<body>
    <h2>Welcome to the course</h2>
    <div class="container">
        <h1>Registration Form</h1>
        <form action="">
            <div class="form-group">
                <input type="text" id="first name" placeholder="First Name" required>
                <input type="text" id="last name" placeholder="Last Name" required>
                <div class="form-group">
                    <input type="text" id="email" placeholder="Email" required>
                </div>
                <div class="form-group">
                    <input type="text" id="password" placeholder="Password" required>
                </div>
                <div class="form-group">
                    <input type="text" id="confirm password" placeholder="Confirm Password" required>
                </div>
                <div class="form-action">
                    <div class="checkbox">
                        <input type="checkbox" id="check" checked>
                    </div>
                </div>
                <div class="form-action"></div>
                <div class="checkbox">
                    <h5>I accept <a href="http://google.com" target="_blank" rel="noener noreferrer">Terms of
                            use</a></h5>
                </div>
            </div>
            <button id="btn" onclick="register()">Register Now</button>
        </form>
    </div>
    <script>
        function register() {
            let firstname = document.getElementById('first name').value;
            let lastname = document.getElementById('last name').value;
            let password = document.getElementById('password').value;
            let confirmpassword = document.getElementById('confirm password').value;
            // let message = document.getElementById('message');
            let btn = document.getElementById('btn');

            if (firstname.length != 0 && lastname.length != 0 && email.length != 0 && password.length != 0 && confirmpassword != 0) {
                if (password == confirmpassword) {
                    btn.innerHTML = "Registered"
                    alert("You have been successfully registered");
                }
                else {
                    alert("Password does not match");
                }
            }
            else {
                alert("Please fill all the form");
                // message.textContent = "";
            }
        }
    </script>
</body>

</html>